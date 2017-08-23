#ifndef FLY_H
#define FLY_H
#include<iostream>
#include<string>
using namespace std;

class Fly
{
public:
	Fly();
	virtual string if_fly(){ return "void";}
};

class Canfly : public Fly
{
public:
	Canfly();
	string if_fly();
};

class Cantfly : public Fly
{
public:
	Cantfly();
	string if_fly();
};

#endif FLY_H