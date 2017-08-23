#include<iostream>
using namespace std;
#include "Subject.h"
#include "Observer.h"
#include<vector>

int main()
{
	char x;
	Stockgrabber *server1=new Stockgrabber();
	StockObserver *observer1=new StockObserver(server1);
	server1->setIBM(197.00);
	server1->setAPPL(677.60);
	server1->setGOOG(676.40);
	cout<<"enter key to exit"<<endl;
	cin>>x;
	return 0;
}