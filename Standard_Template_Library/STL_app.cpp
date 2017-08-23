#include<iostream>
#include "Vectors.h"
#include "Deques.h"

using namespace std;

int main()
{
	char x;
	int choice;
	vectors v;
	deques deq;
	cout<<"what you want to study"<<endl;
	cout<<"1. vectors"<<endl;
	cout<<"2. Deque"<<endl;
	cin>>choice;
	switch (choice)
	{
	case 1:
		int value;
		for(int i=0;i<4;i++)
		{
			cout<<"enter new value in a vector"<<endl;
			cin>>value;
			v.push(value);
		}
		v.display();
		break;
	case 2:
		int value1;
		for(int i=0;i<4;i++)
		{
			cout<<"enter new value in both sides of deque"<<endl;
			cin>>value1;
			deq.push(value1);
		}
		deq.display();
		break;
	}

	cout<<"press any key to exit"<<endl;
	cin>>x;
	return 0;
}