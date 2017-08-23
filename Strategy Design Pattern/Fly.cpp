#include<iostream>
#include"Fly.h"

using namespace std;

Fly::Fly()
{
}

Canfly::Canfly()
{

}

Cantfly::Cantfly()
{

}

string Canfly::if_fly()
{
	return("Flying high");
}

string Cantfly::if_fly()
{
	return("I cannot fly");
}