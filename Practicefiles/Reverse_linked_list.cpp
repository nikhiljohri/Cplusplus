//#include<iostream>
//#include<stdio.h>
//
//using namespace std;
//
//class Nodes
//{
//private:
//	int data;
//	Nodes *Next;
//public:
//	void insert(int);
//	void display();
//	void reverse();
//	void reverseset(int,int);
//	Nodes()
//	{
//		data = 0;
//		Next = NULL;
//	}
//	Nodes(int data)
//	{
//		this->data = data;
//	}
//};
//
//Nodes *start=NULL;
//Nodes *temp=NULL;
//
//void Nodes::insert(int num)
//{
//	Nodes *Node = new Nodes(num);
//	if(start==NULL)
//		start = Node;
//	else
//		temp->Next = Node;
//	Node->Next=NULL;
//	temp = Node;
//}
//
//void Nodes::display()
//{
//	Nodes *n=new Nodes();
//	for(n=start;n!=NULL;n=n->Next)
//	{
//		cout<<n->data<<endl;
//	}
//	cout<<endl;
//}
//
//void Nodes::reverse()
//{
//	Nodes *previous=NULL;
//	Nodes *current=start;
//	Nodes *Nextnode=NULL;
//	
//	while(current != NULL)
//	{
//		Nextnode = current->Next;
//		current->Next = previous;
//		previous = current;
//		current = Nextnode;
//		//j++;
//	};
//		start=previous;
//}
//
//void Nodes::reverseset(int r1, int r2)
//{
//	int count = 1;
//	Nodes *prev = start;
//	Nodes *nxt = NULL;
//	Nodes *current = start;
//	Nodes *last;
//	Nodes *lcurr;
//	while(count < r1)
//	{
//		prev = current;
//		current = current->Next;
//		count++;
//	};
//	last = prev;
//	lcurr=current;
//	while(count<=r2)
//	{
//		nxt = current->Next;
//		current->Next = prev;
//		prev = current;
//		current = nxt;
//		count++;
//	};
//	if (r1 == 1)
//		start=prev;
//	else
//		last->Next = prev;
//	lcurr->Next = current;
//
//}
//
//int main()
//{
//	Nodes LinkedNode;
//	int count=0;
//	int num;
//	int r1,r2;
//	int set;
//	do
//	{
//		cout<<"enter digit in list"<<endl;
//		cin>>num;
//		if(!cin.fail())
//		{
//			count++;
//			LinkedNode.insert(num);
//		}
//	} while(!cin.fail());
//	cin.clear();
//	cin.ignore();
//	cout<<"Displaying elements of the list"<<endl;
//	LinkedNode.display();
//	LinkedNode.reverse();
//	cout<<"Displaying reverse list"<<endl;
//	LinkedNode.display();
//	cout<<"enter range to revrse"<<endl;
//	cout<<"starting pt - ";
//	cin>>r1;
//	cout<<"ending pt - ";
//	cin>>r2;
//	if((r1>0) && (r1<r2) && (r2<=count))
//		LinkedNode.reverseset(r1,r2);
//	else
//		cout<<"give proper range"<<endl;
//	cout<<"Displaying selective reverse list"<<endl;
//	LinkedNode.display();
//	cout<<"enter set to recurr reverse"<<endl;
//	cin>>set;
//	r1=1;
//	r2=set;
//	while (r2<=count)
//	{
//		LinkedNode.reverseset(r1,r2);
//		r1=r1+set;
//		r2=r2+set;
//	};
//	cout<<"Displaying selective recur reverse list"<<endl;
//	LinkedNode.display();
//	return 0;
//}