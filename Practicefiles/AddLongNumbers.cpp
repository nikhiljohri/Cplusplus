//#include<iostream>
//#include<stdio.h>
//#include<string>
//#include<stack>
//#include<vector>
//#include<iterator>
//
//using namespace std;
//void add(string &,string &, vector<int> &);
//
//int main()
//{
//	vector<int> v;
//	vector<int>::iterator it;
//	string dig1;
//	string dig2;
//	cout<<"first number"<<endl;
//	getline(cin,dig1);
//	cout<<"second number"<<endl;
//	getline(cin,dig2);
//	add(dig1,dig2,v);
//	for(it=v.begin();it!=v.end();++it)
//		cout<<*it;
//	cout<<endl;
//	return 0;
//}
//
//void add(string &dig1,string &dig2, vector<int>& v)
//{
//	stack<int> num1;
//	stack<int> num2;
//	stack<int> sum;
//	stack<int> temp;
//	//string res;
//	int rem = 0;
//	int tempsum;
//	int min;
//	int len1 = dig1.size();
//	int len2 = dig2.size();
//	for(int i=0;i<len1;i++)
//		num1.push(dig1[i]-'0');
//	for(int j=0;j<len2;j++)
//		num2.push(dig2[j]-'0');
//	if (len1>len2) 
//	{
//		min = len2; 
//		temp = num1;
//	}
//	else 
//	{
//		min = len1;
//		temp = num2;
//	}
//	while(min>0)
//	{
//		tempsum = num1.top()+num2.top() + rem;
//		num1.pop();
//		num2.pop();
//		temp.pop();
//		sum.push(tempsum%10);
//		rem = tempsum/10;
//		min--;
//	};
//	if ((len1==len2) && (rem>0))sum.push(rem);
//	else if (len1!=len2)
//	{sum.push(temp.top() + rem);
//	temp.pop();}
//	else{}
//	while (!temp.empty())
//	{
//		sum.push(temp.top());
//		temp.pop();
//	};
//	cout<<"sum of both"<<endl;
//	
//	while(!sum.empty())
//	{
//		v.push_back(sum.top());
//		sum.pop();
//	};
//	
//}