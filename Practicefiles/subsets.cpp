//#include<iostream>
//#include<string>
//#include<stdio.h>
//#include<vector>
//#include<iterator>
//using namespace std;
//
//void findset(char, vector<string>&);
//int main()
//{
//	int ch;
//	string str;
//	vector<string> v;
//	cout<<"enter string - ";
//	getline(cin,str);
//	if(str.size()!=0)
//	{
//		string s(1, str[0]);
//		cout<<s<<endl;
//		cout<<"-----------"<<endl;
//		v.push_back(" ");
//		v.push_back(s);
//	}
//	for(int i=1;i<str.size();i++)
//		findset(str[i], v);
//	vector<string>::iterator it;
//	for(it=v.begin();it!=v.end();++it)
//		cout<<*it<<",";
//	cout<<endl;
//	return 0;
//}
//
//void findset(char c, vector<string> &v)
//{
//	vector<string> v1;
//	v1=v;
//	vector<string>::iterator it;
//	int len,count;
//	count=0;
//	len=v.size();
//	for(it=v.begin();count<len,it!=v.end();++it)
//	{
//		v1.push_back(*it+c);
//		cout<<*it+c<<endl;
//
//		++count;
//	}
//	v=v1;
//}