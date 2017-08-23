#include<iostream>
#include "New_Template.h"
using namespace std;

template<typename T2>
T2 add(T2 input1, T2 input2)
{
	return input1+input2;
}

template<typename T> 
T Templates<T>::multiply(T input1, T input2)
{
	return input1*input2;
}

int main()
{
	char x;
	Templates<int> tm; // datatype is necessary for class declaration
	
	cout<<"enter number 1"<<endl;
	cin>>tm.num1;
	cout<<"enter number 2"<<endl;
	cin>>tm.num2;
	tm.add_out=add(tm.num1,tm.num2); // datatype is not necessary for function declaration
	tm.mult_out=tm.multiply(tm.num1,tm.num2);
	cout<<"addition of two numbers is"<<tm.add_out<<endl;
	cout<<"multiplication of two numbers is"<<tm.mult_out<<endl;
	cout<<"enter any key to exit"<<endl;
	cin>>x;
	return 0;
}