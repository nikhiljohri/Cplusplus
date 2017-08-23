#ifndef MILTITHREADING_H
#define MILTITHREADING_H
#include<string>
#include<future>
using namespace std;
class Threads
{
public:
	int reciever(int,int);
	int reciever2(int);
	void calling();
	
};
void print(string,int);
void print2(string,int);
void print3(string,int);
void outside_caller();
void outside_reciever(char &, char);
void outside_reciever1(future<int>&);
#endif