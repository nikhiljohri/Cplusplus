#include "String.h"
#include<iostream>
//#include<string>
using namespace std;

strings::strings()
{
	cout<<"-------------Entering default Ctor-------------"<<endl;
	str=NULL;
	length = 0;
}

strings::strings(const strings &s0)
{
	cout<<"-------------Entering copy Ctor-------------"<<endl;
	length=s0.length;
	str = new char[length+1];
	for(int i=0;i<length;i++)
	{
		str[i]=s0.str[i];
	}
	str[length]='\0';
}

istream& operator>> (istream &in , strings &s1)
{
	cout<<"-------------Entering >> overloading-------------"<<endl;
	while(true)
	{
		char temp = in.get();
		if(temp == '\n')
			break;
		if(s1.length==0)
			s1.length=2;
		else
			s1.length=s1.length+1;
	char *new_str=new char[s1.length];
	if (s1.str!=NULL)
		new_str=s1.str;
	new_str[s1.length-2] = temp;
	new_str[s1.length-1]='\0';
	s1.str=new_str;
	//delete new_str;
	}
	return in;
}


strings& operator<< (ostream &out , strings &s2)
{
	cout<<"-------------Entering << overloading-------------"<<endl;
	int i=0;
	char temp;
	if (s2.length!=0)
	{
		do
		{
			temp=s2.str[i];
			out<<temp;
			i=i+1;
		} while(temp!='\0');
	}
	return s2;
}


strings &strings::operator= (const strings &s3)
{
	cout<<"-------------Entering = overloading-------------"<<endl;
	if (length!=0)
		delete [] str;
	length = s3.length;
	str=new char[length+1];
	for(int i=0;i<length;i++)
	{
		str[i]=s3.str[i];
	}
	str[length]='\0';
	return *this;
}


strings strings::operator+ (const strings &s4)
{
	cout<<"-------------Entering + overloading-------------"<<endl;
	strings cat;
	cat.length = length + s4.length - 1;
	cat.str=new char[cat.length];
	for(int i=0;i<(length-1);i++)
	{
		cat.str[i]=str[i];
	}
	for(int j=(length-1);j<(cat.length);j++)
	{
		cat.str[j]=s4.str[j-length+1];
	}
	cat.str[cat.length]='\0';
	return cat;
}

bool strings::operator== (const strings &s5) const
{
	cout<<"-------------Entering == overloading-------------"<<endl;
	bool check;
	int flag=1;
	if(length!=s5.length)
		flag=0;
	else if((length==0)&&(s5.length==0))
		flag=1;
	else
	{
		for(int i=0;i<length;i++)
		{
			if(str[i]!=s5.str[i])
				{
					flag=0;
					break;
				}
		}
		if(flag==0)
			return false;
		else
			return true;
	}	
}
