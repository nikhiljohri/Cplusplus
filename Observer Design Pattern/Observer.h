#ifndef OBSERVER_H
#define OBSERVER_H
#include<iostream>
using namespace std;
#include "Subject.h"

class Observer
{
public:
	virtual void update(double,double,double);
};

class StockObserver : public Observer
{
	int IDtracker;
	int ID;
	double IBMprice; 
	double GOOGprice; 
	double APPLprice;
	//Subject sub;
public:
	StockObserver(Stockgrabber *);
	void update(double,double,double);
	void print_price();
};
#endif