#include<iostream>
using namespace std;
#include "Animal.h"
#include "Fly.h"
#include<string>

Animal::Animal()
{
}

void Animal::place()
{
	cout<<"Animal: we all live in forest"<<endl;
}

string Animal::try_to_fly()
{
	return fl->if_fly();
}

void Animal::give_fly(Fly *fli)
{
	fl=fli;
}