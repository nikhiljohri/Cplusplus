#include "String.h"
#include<iostream>
#include<string>
using namespace std;

int main()
{
	char x;
	strings name1,surname1,name2,surname2;
	strings new_name;
	strings full_name1;
	strings full_name2;
	strings name3,name4;

	cout<<"#####################################################"<<endl;
	cout<<"Enter name of student 1:   "<<endl;
	cin>>name1;
	cout<<name1;
	cout<<endl;
	cout<<"enter surname of student 1:   "<<endl;
	cin>>surname1;
	cout<<surname1;
	cout<<endl;
	cout<<"Enter name of student 2:   "<<endl;
	cin>>name2;
	cout<<name2;
	cout<<endl;
	cout<<"enter surname of student 2:   "<<endl;
	cin>>surname2;
	cout<<surname2;
	cout<<endl;

	cout<<"#####################################################"<<endl;
	new_name=name2;
	cout<<"copied name2 (x=y) to new object is:  "<<endl;
	cout<<new_name;
	cout<<endl;

	cout<<"#####################################################"<<endl;
	strings new_name2(name1);
	cout<<"copied name1 (copy Ctor) to new object is:  "<<endl;
	cout<<new_name2;
	cout<<endl;

	cout<<"#####################################################"<<endl;
	full_name1=name1+surname1;
	full_name2=name2+surname2;
	cout<<"full name of student 1 is    "<<endl;
	cout<<full_name1;
	cout<<endl;
	cout<<"full name of student 2 is    "<<endl;
	cout<<full_name2;
	cout<<endl;

	cout<<"#####################################################"<<endl;
	cout<<"enter name1 for compare   "<<endl;
	cin>>name3;
	cout<<"enter name2 for compare   "<<endl;
	cin>>name4;
	if(name3==name4)
		cout<<"Both names are same"<<endl;
	else
		cout<<"Both names are different"<<endl;

	cout<<"#####################################################"<<endl;
	cout<<"Press any key to continue"<<endl;
	cin>>x;
	return 0;
}