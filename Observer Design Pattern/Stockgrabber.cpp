#include<iostream>
using namespace std;
#include "Subject.h"
#include "Observer.h"
#include<vector>


void Stockgrabber::registers(Observer newObserver)
{
	observers.push_back(newObserver);
}

void Stockgrabber::unresgister(Observer delObserver)
{
	vector<Observer>::iterator itb=observers.begin();
	itb  = find(observers.begin(),observers.end(),delObserver);
	observers.erase(itb);
	//int index = distance(observers.begin(),itb);
	//observers.erase(observers.begin()+index);
}

void Stockgrabber::notify()
{
	for(vector<Observer>::iterator it=observers.begin();it!=observers.end();++it)
	{
		it->update(IBM,GOOG,APPL);
	}
}

void Stockgrabber::setIBM(double newIBM)
{
	IBM =newIBM;
	notify();
}

void Stockgrabber::setGOOG(double newGOOG)
{
	IBM =newGOOG;
	notify();
}
void Stockgrabber::setAPPL(double newAPPL)
{
	APPL =newAPPL;
	notify();
}
