#include<iostream>
#include<string>

using namespace std;
void searchstr(char** , int,int,string);
bool search(char**, int,int,int,int, string);

int x[8]={0,0,-1,1,1,-1,1,-1};
int y[8]={1,-1,0,0,1,-1,-1,1};

void searchstr(char **mat, int row, int col, string text)
{
	bool flag;
	flag = false;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			flag = search(mat,i,j,row,col,text);
			if(flag == true)
			{
				cout<<i<<","<<j<<endl;
			}
			flag = false;
		}
	}
}

bool search(char**mat,int row,int col,int totalrow, int totalcol, string text)
{
	if(mat[row][col] != text[0])
		return false;
	int len = text.size();
	for(int dir=0;dir<8;dir++)
	{
		int k;
		int newrow = row + x[dir];
		int newcol = col + y[dir];
		for( k=1;k<len;k++)
		{
			if((newrow < 0)||(newrow>totalrow)||(newcol<0)||(newcol>totalcol))
				break;
			if(mat[newrow][newcol]!=text[k])
				break;
			newrow = newrow + x[dir];
			newcol = newcol  = y[dir];
		}
		if(k==len)
			return true;
	}
	return false;
}

int main()
{
	int row,col;
	string text;
	cout<<"enter row count"<<endl;
	cin>>row;
	cout<<"enter col count"<<endl;
	cin>>col;
	char **mat = new char*[row];
	for(int i=0;i<row;i++)
	{
		mat[i] = new char[col];
		for(int j=0;j<col;j++)
			cin>>mat[i][j];
	}
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
			cout<<mat[i][j];
		cout<<endl;
	}
	cout<<"enter string to search"<<endl;
	cin>>text;
	searchstr(mat, row,col,text);
	return 0;
}