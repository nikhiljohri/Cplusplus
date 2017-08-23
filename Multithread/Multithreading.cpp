#include <iostream>
#include <thread>
#include <mutex>
#include <string>
#include<condition_variable>
#include<future>
#include "Multithreading.h"

using namespace std;
mutex mu;
mutex mu2;
mutex mu3;
mutex mu4;
once_flag flag;
condition_variable cond;
condition_variable cond1;
promise<int> p;
future<int> f=p.get_future();

/* Ways to start thread
   1. thread t1(&Threads::reciever,*this,10);                      // if class functions.
   2. thread t2(outside_reciever,ref(a),move(b));                  //outside class functions
   3. #include<future>
      future<int> fu=async(&Threads::reciever,*this,100,90);       //to pass value from child thread to parent(future)
	  fu.get();
   4. promise<int> p;
	  future<int> f=p.get_future();
	  future<int> fu1=async(outside_reciever1,ref(f));             //to pass value from parent thread to child(future)
	  p.set_value(28);
	  int x=f.get();
   5. auto t=bind(&Threads::reciever,*this,20,10);
      t();                                                         // declared once and call later just by t();
   6. packaged_task<int()> p1(bind(&Threads::reciever2,*this,30)); 
      p1();                                                        //declares once and call later just by p1(),but returns (future)
	  int ret=p1.get_future().get(); 
   or
	  packaged_task<int()> p1(bind(&Threads::reciever2,*this,30)); 
      p1();                                                        
	  future<int> f=p1.get_future();
	  int ret=f.get();

   ASYNC, PROMISE, PACKAGED_TASK returns future.

   Three ways to implement mutex to avoid race conditn :-
   1. lock_guard<mutex> locker(mu);
   2. unique_lock<mutex> locker(mu,defer_lock);
      locker.lock();
	  locker.unlock();
   3. mu.lock();
      mu.unlock(); 

   To avoid deadlock :-
   1. lock_guard<mutex> locker(mu,adopt_lock);
      lock(mu,mu2);  
	  
   To call lembda functn only once and by only one thread. This will also make it thread safe
      once_flag flag;
      call_once(flag, [&](){cout<<"_called_once"<<str_temp<<int_temp<<endl;});   
	  
   To notify thread/s to start after any event.
	  #include<condition_variable>
      condition_variable cond;
	  cond.notify_all();
      cond.wait(<unique_lock object>);   
	  
   To join/detach thread
      t1.join();
	  t1.detach()  
	  
   To sleep
      this_thread::sleep_for(chrono::seconds(1));  */


void print(std::string str_temp, int int_temp)
{
	lock(mu,mu2);
	lock_guard<mutex> locker2(mu2,adopt_lock);
	lock_guard<mutex> locker(mu,adopt_lock);
	cout<<str_temp<<int_temp<<endl;
}

void print2(std::string str_temp, int int_temp)
{
	lock(mu,mu2);
	lock_guard<mutex> locker(mu,adopt_lock);
	lock_guard<mutex> locker2(mu2,adopt_lock);
	cout<<str_temp<<int_temp<<endl;
}

void print3(std::string str_temp, int int_temp)
{
	int i=3;
	call_once(flag, [&](){cout<<"_called_once"<<str_temp<<int_temp<<endl;});
	cout<<str_temp<<int_temp<<endl;
}

int Threads::reciever(int k,int l)
{
	int static test=1000;
	for(;k>l;k--)
	{
		print("reciever: ", k);
		test--;
	}
cond.notify_one();
return test;
}

int Threads::reciever2(int z)
{
	cout<<"Ref to package is"<<z<<endl;
	int res=100;
	return res;
}

void Threads::calling()
{ 
	auto t=bind(&Threads::reciever,*this,20,10);
	packaged_task<int()> p1(bind(&Threads::reciever2,*this,30));
	thread t1(&Threads::reciever,*this,10,0);
	unique_lock<mutex> locker3(mu3);
	cond.wait(locker3);
	try
	{
		future<int> fu=async(&Threads::reciever,*this,100,90);
		for(int i=0;i<10;i++)
			print2("caller: ",i);
		cout<<"value of test from child is"<<fu.get()<<endl;
		t();
		p1();
		int ret=p1.get_future().get();
		cout<<"value return by package is"<<ret<<endl;
	}
	catch(...)
	{
		//t1.detach();
		t1.join();
		throw;
	}
	t1.detach();
}

void outside_reciever(char &c, char d)
{
	//this_thread::sleep_for(chrono::seconds(1));		
	c='I';
	print3("reciever_c(A) is: ", c);
	print3("reciever_d(B) is: ", d);
	cond1.notify_one();
}

void outside_reciever1(future<int>& f)
{
	int n=f.get();
	cout<<"value passed by parent is"<<n<<endl; 
}

void outside_caller()
{
	char a='N';
	char b='J';
	cout<<"caller_initial_a:  "<<a<<endl; 
	cout<<"caller_initial_b:  "<<b<<endl;
	thread t2(outside_reciever,ref(a),move(b));
	try
	{
		//this_thread::sleep_for(chrono::seconds(2));		
		unique_lock<mutex> locker4(mu4);
		cond1.wait(locker4);
		future<int> fu1=async(outside_reciever1,ref(f));
		p.set_value(28);
		
		print3("caller_later_a:  ", a); 
		print3("caller_later_b:  ", b);
	}
	catch(...)
	{
		if(t2.joinable())
			t2.join();
		throw;
	}
	if(t2.joinable())
			t2.join();
}