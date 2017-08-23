#include<iostream>
#include<list>
#include<vector>
#include<map>
#include<string>
using namespace std;
map<int,string> m;
vector<int> minvc;
int len;

bool isdiffone(string,string);

class Graph
{
	int v;
	list<int> *ls;
	vector<int> vc;
public:
	Graph(int);
	void insert(int,int);
	void getallpair(int,int);
	void getallpairutil(int,int,bool *);
};

Graph::Graph(int n)
{
	ls = new list<int>[n];
	v=n;
}

void Graph::insert(int from, int to)
{
	ls[from].push_back(to);
}

void Graph::getallpair(int s, int d)
{
	bool *isVisited = new bool[v];
	for(int i=0;i<v;i++)
		isVisited[i] = false;
	vc.push_back(s); 
	isVisited[s] = true;
	getallpairutil(s,d,isVisited);
}

void Graph::getallpairutil(int s, int d, bool *isVisited)
{
	if(s==d)
	{
		if(vc.size()<len)
			minvc = vc;
	}
	else
	{
		list<int>::iterator it1;
		for(it1=ls[s].begin();it1!=ls[s].end();it1++)
		{
			if(isVisited[*it1] == false)
			{
				isVisited[*it1] = true;
				vc.push_back(*it1);
				getallpairutil(*it1, d, isVisited);
			}
		}
	}
	vc.pop_back();
	isVisited[s] = false;
}

bool isdiffone(string s1, string s2)
{
	int len1=s1.size();
	int len2 = s2.size();
	int count=0;
	if(abs(len1-len2)>1) return false;
	int i=0,j=0;
	while(i<len1 && j<len2)
	{
		if(s1[i] != s2[j])
		{
			if(count==1) return false;
			if(len1>len2)  j++;
			else if (len2>len1) i++;
			else
			{
				i++;
				j++;
			}
			count++;
		}
		else
		{
			i++;
			j++;
		}
	};
	if(i<len1||j<len2) count++;
	return count==1;
}

int main()
{
	m.insert(pair<int,string>(0,"sat"));
	m.insert(pair<int,string>(1,"rat"));
	m.insert(pair<int,string>(2,"hat"));
	m.insert(pair<int,string>(3,"hate"));
	m.insert(pair<int,string>(4,"date"));
	m.insert(pair<int,string>(5,"tate"));
	m.insert(pair<int,string>(6,"late"));
	int nodes = m.size();
	int source,dest;
	Graph g(nodes);
	len = nodes;
	for(int i=0;i<nodes;i++)
	{
		for(int j=0;j<nodes;j++)
		{
			if(i!=j)
			{
				if(isdiffone(m[i],m[j]))
					g.insert(i,j);
			}
		}
	}
	source=0;
	dest=6;
	g.getallpair(source,dest);
	vector<int>::iterator it;
	for(it=minvc.begin();it!=minvc.end();it++)
		cout<<m[*it]<<" - ";
	cout<<endl;
	return 0;
}

