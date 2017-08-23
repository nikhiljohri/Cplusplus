#ifndef DEQUES_H
#define DEQUES_H
#include <iostream>
#include <deque>

using namespace std;

class deques
{
	deque<int> deq;
public:
	deques();
	void push(int);
	void pop();
	void display();
};

#endif DEQUES_H