//#include<iostream>
//#include<stdio.h>
//#include<vector>
//#include<iterator>
//
//using namespace std;
//int findNum(int,int,int*,int);
//bool findPair(int *, int, int &, int &);
//int main()
//{
//	int array[5];
//	int i=0;
//	int sum;
//	bool isexist;
//	int dig1=0,dig2=0;
//	do
//	{
//		cout<<"enter digits in an array"<<endl;
//		cin>>array[i];
//		i++;
//	}while(i<5);
//	cout<<"enter sum"<<endl;
//	cin>>sum;
//	isexist = findPair(array, sum,dig1,dig2);
//	if(isexist)
//		cout<<"pair found with "<<dig1<<" , "<<dig2<<endl;
//	else
//		cout<<"pair not found"<<endl;
//	return 0;
//}
//
//bool findPair(int *p, int sum, int &dig1, int &dig2)
//{
//	int nearestsum;
//	int subnearestsum;
//	int dif;
//	nearestsum = findNum(0, 4, p, sum);
//	cout<<nearestsum<<endl;
//	while(nearestsum>=0)
//	{
//		dif = sum-p[nearestsum];
//		if (dif>p[nearestsum])
//			return false;
//		else
//		{
//			subnearestsum=findNum(0,nearestsum,p,dif);
//			if (p[subnearestsum] == dif)
//			{
//				dig1=p[subnearestsum];
//				dig2 = p[nearestsum];
//				return true;
//			}
//			else
//			{
//				nearestsum--;
//			}
//		}
//	};
//	return false;
//}
//
//int findNum(int start, int end, int *p, int sum)
//{
//	int aend = end;
//	int astart = start;
//	while(start<=end)
//	{
//		int mid  = (start+end)/2;
//		if(p[mid]>sum)
//			end = mid-1;
//		else if(p[mid]<sum)
//			start = mid+1;
//		else
//			return mid;
//	};
//	if(start>aend)
//		return start-1;
//	else 
//		return end+1;
//	;
//}