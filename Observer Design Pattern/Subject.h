#ifndef SUBJECT_H
#define SUBJECT_H
#include<iostream>
#include"Observer.h"
#include<vector>
using namespace std;

class Subject
{
public:
	Subject();
	vector<Observer> observers;
	virtual void registers(Observer );
	virtual void unresgister(Observer );
	virtual void notify();
};

class Stockgrabber : public Subject
{
private:
	double IBM,GOOG,APPL;
public:
	
	void registers(Observer );
	void unresgister(Observer );
	void notify();
	void setIBM(double);
	void setGOOG(double);
	void setAPPL(double);

};

#endif