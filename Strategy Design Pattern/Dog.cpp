#include<iostream>
#include"Animal.h"

using namespace std;

Dog::Dog()
{
	fl=new Cantfly();
}

void Dog::sound()
{
	cout<<"Dog: I bark"<<endl;
}

void Dog::tail()
{
	cout<<"Dog: I have a tail"<<endl;
}

