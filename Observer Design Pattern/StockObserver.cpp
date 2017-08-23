#include<iostream>
using namespace std;
#include"Observer.h"
#include"Subject.h"
//#include"stockgrabber.cpp"
int ID=0;


StockObserver::StockObserver(Stockgrabber *sub)
{
	//this->sub=sub;
	this->IDtracker=this->IDtracker+1;
	cout<<"New observer is"<<this->IDtracker;
	sub->registers(*this);
}

void StockObserver::update(double IBMprice, double GOOGprice, double APPLprice)
{
	this->IBMprice=IBMprice;
	this->GOOGprice=GOOGprice;
	this->APPLprice=APPLprice;
	this->print_price();
}

void StockObserver::print_price()
{
	cout<<"Observer: "<<ID<<"/n IBM: "<<IBMprice<<"/n GOOGLE: "<<GOOGprice<<"/n APPLE: "<<APPLprice<<endl; 
}