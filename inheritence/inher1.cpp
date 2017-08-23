#include<iostream>
#include<string>
using namespace std;

class Base
{
public:
	int f() const {
		cout<<"base:f()\n";
		return 1;
	}
	int f(string) const {
		cout<<"base f(str) \n";
		return 1;
	}
	void g() {}
protected:
    void h()
	{
		cout<<" i m private";
	}

};

class derived1 : public Base
{
public:
	void g() const {}
};

class derived2 : public Base
{
public:
	int f() const {
		cout<<"derived2 f() \n";
		return 2;
	}
};

class derived3 :public Base
{
public:
	void f() const
	{
		cout<<"derived3 f() \n";
	}
};

class derived4 :public Base
{
public:
	int f(int) const {
		cout<<"derived4 f() \n";
	}
};

int main()
{
	Base *b;
	derived1 d_test;
	b = &d_test;
	b->h();

	int z;
	string s("hello");
	derived1 d1;
	int x= d1.f();
	d1.f(s);
	derived2 d2;
	x=d2.f();
	d2.f(s);
	derived3 d3;
	x=d3.f();
	derived4 d4;
	x=d4.f();
	x=d4.f(1);
	cout<<"press any kry to exit";
	cin>>z;
}


