#include<iostream>
#include<stdio.h>
#include<map>
#include<iterator>
#include<vector>
using namespace std;

int main()
{
	multimap<int,int> item;
	vector<int> res;
	int Totalwt;
	int wt, val;
	bool isOK;
	cout<<"enter allowed weight"<<endl;
	cin>>Totalwt;
	cout<<"enter non int input for value to exit the loop"<<endl;
	do
	{
		cout<<"enter weight of the item"<<endl;
		cin>>wt;
		cout<<"enter value of the item"<<endl;
		cin>>val;
		if(!cin.fail())
		{
			item.insert(pair<int,int>(wt,val));
		}
	} while(!cin.fail());
	cin.clear();
	cin.ignore();
	multimap<int,int>::iterator it;
	*it = item.begin;
	int size = item.size();
	int **tarr;
	*tarr = new int[size];
	tarr = new int*[size]; 
	isOK = operate(it, res, Totalwt, tarr[0][0]);
	return 0;
}


bool operate(const multimap<int,int>::iterator it, vector<int> &res, int Twt, int **tarr)
{

	if(*it==)
		return false;
	if(
}