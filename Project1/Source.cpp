/*
#include <iostream>
using namespace std;

int main()
{
	char a[15][2];
	int b[32768]={0};
	int n,y,max=0,index=0;
	cin>>n;
	int x=pow(2,n)-1;
	for(int i=0;i<x;i++)
	{
		cin>>a[i];
		b[int(a[i][0])-97]++;
	}
	for(int j=0;j<(x+1);j++)
	{
		if(b[j]>max) {max=b[j];index=j;}
	}
	cout<<char(index+97);
	cin>>y;
}

*/