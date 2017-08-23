#include "Node.h"
#include "List.h"
#include<iostream>
using namespace std;

int main()
{
	List l;
	char flag;
	char x;
	int input,pos,val;
	do
	{
		cout<<"###########################################"<<endl;
		cout<<"what you want to do?"<<endl;
		cout<<"1. Enter data in the front"<<endl;
		cout<<"2. Enter data in the end"<<endl;
		cout<<"3. Enter data at given position"<<endl;
		cout<<"4. Delete entry by data"<<endl;
		cout<<"5. Delete entry by position"<<endl;
		cout<<"6. Reverse the list"<<endl;
		cout<<"###########################################"<<endl;
		cin>>input;
		switch (input)
		{
		case 1:
			l.enter_list();
			break;
		case 2:
			l.enter_last_list();
			break;
		case 3:
			cout<<"give postion(must be greater then 0)"<<endl;
			cin>>pos;
			l.enter_rand_list(pos);
			break;
		case 4:
			cout<<"enter data to delete"<<endl;
			cin>>val;
			l.delete_bydata_list(val);
			break;
		case 5:
			cout<<"enter position to delete"<<endl;
			cin>>pos;
			l.delete_bypos_list(pos);
			break;
		case 6:
			l.reverse_list();
			break;
		default:
			cout<< "enter correct input "<<endl;
		}
		l.display_list();
		cout << "do you want to continue"<<endl;
		cin >> flag;
	}while(flag=='y' || flag=='Y');
	l.display_list();
	cout<<"\nPress any key and hit enter to end...";
    cin>>x;
	return 0;
}