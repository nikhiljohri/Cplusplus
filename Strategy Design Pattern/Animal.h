#ifndef ANIMAL_H
#define ANIMAL_H
#include<iostream>
#include "Fly.h"
using namespace std;

class Animal
{
public:
	Fly *fl;
	Animal();
	void place();
	string try_to_fly();
	void give_fly(Fly *);
	virtual void sound(){}
};

class Bird : public Animal
{
public:
	Bird();
	void sound();
	void eat_type();
};

class Dog : public Animal
{ 
public:
	Dog();
	void sound();
	void tail();
};

#endif ANIMAL_H