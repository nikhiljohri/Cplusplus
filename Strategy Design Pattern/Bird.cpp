#include<iostream>
#include"Animal.h"

using namespace std;

Bird::Bird()
{
	fl=new Canfly();
}

void Bird::sound()
{
	cout<<"Bird: I make diff noise"<<endl;
}

void Bird::eat_type()
{
	cout<<" Bird: I am veg"<<endl;
}
