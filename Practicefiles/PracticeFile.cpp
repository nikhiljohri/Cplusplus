//#include<iostream>
//#include<stdio.h>
//
//class Volume
//{
//private:
//	int length;
//	int breadth;
//	int height;
//public:
//	int getVolume()
//	{
//		return length*breadth*height;
//	}
//	void setlength(int len)
//	{
//		length = len;
//	}
//	void setbreadth(int brd)
//	{
//		breadth = brd;
//	}
//	void setheight(int ht)
//	{
//		height = ht;
//	}
//	Volume &operator+(const Volume& v1)
//	{
//		Volume v2;
//		v2.length = this->length+v1.length;
//		v2.breadth = this->breadth+v1.breadth;
//		v2.height = this->height+v1.height;
//		return v2;
//	}
//};
//
//
//void main()
//{
//	Volume v;
//	Volume v1;
//	Volume v2;
//	v.setbreadth(1);
//	v.setheight(2);
//	v.setlength(3);
//	v1.setbreadth(1);
//	v1.setheight(2);
//	v1.setlength(3);
//	std::cout<<"v vol = "<<v.getVolume();
//	std::cout<<"v1 vol = "<<v1.getVolume();
//	v2=v1+v;
//	std::cout<<"v2 vol = "<<v2.getVolume();
//	int x;
//	std::cin>>x;
//}