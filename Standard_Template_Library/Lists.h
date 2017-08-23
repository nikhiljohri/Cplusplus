#ifndef LISTS_H
#define LISTS_H
#include <iostream>
#include <list>

using namespace std;

class lists
{
	list<int> lst;
public:
	lists();
	void push(int);
	void pop();
	void display();
};

#endif LISTS_H