#include "Node.h"
#include "List.h"
#include<iostream>
using namespace std;

List::List()
{
	start = NULL;
}

void Node::give_value()
{
	cout<<"enter data" <<endl;
	cin>> data;	
}

void Node::show_value()
{
	cout<<data <<endl;
}

int Node::return_data()
{
	return data;
}

void List::enter_list()
{
	Node *fresh;
	fresh = new Node;
	fresh->give_value();
	fresh->next = start;
	start = fresh;
}

void List::enter_last_list()
{
	Node *temp = new Node;
	Node *fresh;
	Node *last_node;
	fresh = new Node;
	last_node = new Node;
	fresh->give_value();
	if (start == NULL)
	{
		fresh->next = start;
		start = fresh;
	}
	else
	{
		for(temp=start;temp!=NULL;temp=temp->next)
			last_node = temp;
		last_node->next=fresh;
		fresh->next=NULL;
	}
	delete temp;
}

void List::enter_rand_list(int pos)
{
	int i;
	Node *fresh = new Node;
	Node *temp = new Node;
	temp = start;
	fresh->give_value();
	for(i=1;i<=pos;i++)
	{
		if((temp == NULL) && (i!=pos))
		{
			cout<<"linked list does not have that many nodes" <<endl;
			break;
		}
		else if((pos==1))
		{
			fresh->next = start;
			start = fresh;
			break;
		}
		else if((temp != NULL) && (i==(pos-1)))
		{
			fresh->next = temp->next;
			temp->next = fresh;
			break;
		}
		else
			temp = temp->next;
	}
	
}

void List::delete_bydata_list(int val)
{
	Node *temp = new Node;
	Node *temp2 = new Node;
	bool fl=false;
	temp2=start;
	for(temp=start;temp!=NULL;temp=temp->next)
	{
		if(temp->return_data()==val)
		{
			if(temp == temp2)
				start=temp->next;
			else
			{
				temp2->next=temp->next;
			}
			delete temp;
			fl = true;
		}
		if(temp==start)
			temp2=start;
		else
			temp2=temp2->next;
		if (fl == true)
			break;
	}
	if (fl == false)
		cout<<"Provided data is not available"<<endl;
}

void List::delete_bypos_list(int pos)
{
	Node *temp = new Node;
	Node *temp2 = new Node;
	temp = start;
	for(int i=1;i<=pos;i++)
	{
		if((temp == NULL) && (i!=pos))
		{
			cout<<"linked list does not have that many nodes" <<endl;
			break;
		}
		else if((pos==1))
		{
			start = temp->next;
			delete temp;
			break;
		}
		else if((temp != NULL) && (i==(pos-1)) && (temp->next!=NULL))
		{
			temp2 = temp->next;
			temp->next = temp2->next;
			delete temp2;
			break;
		}
		else
			temp = temp->next;
	}
}

void List::reverse_list()
{
	Node *current=new Node;
	Node *next_node=new Node;
	Node *temp3=new Node;
	next_node=NULL;
	current=start;
	while(current!=NULL)
	{
		temp3=current->next;
		current->next=next_node;
		next_node=current;
		current=temp3;
	}
	start=next_node;
}

void List::display_list()
{
	Node *Temp;
	Temp = new Node;
	cout<<"----------------------------------------------"<<endl;
	cout<<"your linked list looks like this" <<endl;
	for(Temp=start;Temp!=NULL;Temp=Temp->next)
		Temp->show_value();
	cout<<"----------------------------------------------"<<endl;
	delete Temp;
}

