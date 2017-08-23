// Name:
// USN:
// Summary:


/*#include <iostream>
#include <stack>
using namespace std;
int r=0,l=0,p=0,q=0;
stack<int> s;
	stack<int> s2;
	int right_val=0,left_val=0;
	int visited[100][100];
	

int right(int a,int b, int val[100][100],int n)
{
	for(int i=b;i<(n-1);i++)
	{
		if (val[a][i]>=val[a][b]) 
		{
				r= val[a][i];
				if ((a==0)&&(b==0)) val[a][i]=0;
		}
		if (r>0) return r;
	else return 0; 
	}
	
}

int left(int a,int b, int val[100][100],int m)
{
	for(int i=b;i<(m-1);i++)
	{
		if (val[i][b]<=val[a][b]) 
			{
				r= val[i][b];
				if ((a==0)&&(b==0)) val[i][b]=0;
		}
		if (l>0) return l;
	else return 0;
	}
	 
}

void operate(int m, int n, int val[100][100],int p,int q)
{  
	do
	{
	right_val=right(p,q,val,n);
	if (right_val!=0) s.push(right_val);
	left_val=left(p,q,val,m);
	if (left_val!=0) s.push(left_val);
	int top=s.top();
	s.pop();
	s2.push(top);
	operate(
	}while(((right_val!=0)||(left_val!=0)));

	
}



// Remove additional cin/cout/printf/scanf statements before submission
int GetMaxPositions(int m, int n, int val[100][100])
{
	s.push(val[0][0]);
	operate(m, n, val,0,0);
	
    return -1;
}


int main (void) 
{
    int m, n;
    int i, j;
    int val[100][100];
	
    cin >> m >> n;
	  for(i = 0; i < m; ++i)
	  {
        for(j = 0; j < n; ++j)
		{
            cin >> val[i][j];
			visited[i][j]=0;
		}
	  }

    cout << GetMaxPositions(m, n, val);
    return 0;
}
*/