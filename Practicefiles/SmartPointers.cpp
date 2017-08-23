//#include<iostream>
//#include<stdio.h>
//
//using namespace std;
//
//template<typename t> 
//class CPointer
//{
//public:
//	t *ptr;
//public:
//	
//	CPointer(t *p)
//	{
//		ptr = p;
//	}
//	~CPointer()
//	{
//		delete ptr;
//	}
//	t& operator *()
//	{
//		return *ptr;
//	}
//	t* operator->()
//	{
//		return ptr;
//	}
//};
//
//int main()
//{
//	CPointer <int> pt(new int());
//	CPointer <char> pt1(new char());
//	*pt =10;
//	*pt1 = 'n';
//	cout<<*pt<<endl;
//	cout<<*pt1<<endl;
//	return 0;
//}