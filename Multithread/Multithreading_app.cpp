#include<iostream>
#include<thread>
#include<string>
#include "Multithreading.h"
using namespace std;

int main()
{
	Threads thd;
	char x;
	thd.calling();
	cout<<"############################################"<<endl;
	outside_caller();
	cout<<"############################################"<<endl;
	cout<<"Press any key to continue";
	cin>>x;
	return 0;
}