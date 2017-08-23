#include<iostream>
using namespace std;
#include"WordFinder.h"
void main()
{
	int row,col,charac,total;
	char **mat1, *word;
	cout<<"enter no. of rows"<<endl;
	cin>>row;
	cout<<"enter no. of cols"<<endl;
	cin>>col;
	mat1=read(row,col);
	cout<<"enter no. of characters to search"<<endl;
	cin>>charac;
	word=read_word(charac);
	total=count(mat1,word);
	cout<<"total number of exixtence found are"<<total<<endl;

}


