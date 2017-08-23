#include<iostream>
using namespace std;
#include "Animal.h"
#include "Fly.h"
#include<string>
int main()
{
	char x;
	//Animal an = Animal();
	Animal *kalis = new Dog();
	Animal *swetie =new  Bird();

	cout<<" Dog: "<< kalis->try_to_fly() <<endl;
	cout<<" Cat: "<< swetie->try_to_fly() << endl;

	kalis->give_fly(new Canfly());

	cout<<"dog grows wings"<<endl;
	cout<<" Dog: "<< kalis->try_to_fly() <<endl;

	cout<<"enter key to exit";
	cin>>x;
	return 0;
}
