#include<iostream>
using namespace std;
#include"WordFinder.h"
char ** read(int row, int col)
{
	char **a;
	a=new char*[row];
	for(int i=0;i<row;i++)
	{
		a[i]=new char[col];
		for(int j=0;j<col;j++)
		{
			cout<<"enter value";
			cin>>*((*(a+i))+j);
		}	
	}
	return a;
}
char  * read_word(int charac)
{
	char *a;
	for(int i=0;i<charac;i++)
	{
		cin>>*(a+i);
	}
	return a;
}
int count(char **mat1,char *word)
{
	return 0;
}

	
