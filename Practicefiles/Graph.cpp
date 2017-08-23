//#include<iostream>
//#include<list>
//#include<vector>
//using namespace std;
//
//class Graph
//{
//	int v;
//	list<int> *ls;
//	vector<int> vc;
//public:
//	Graph(int);
//	void insert(int,int);
//	void getallpair(int,int);
//	void getallpairutil(int,int,bool *);
//};
//
//Graph::Graph(int n)
//{
//	ls = new list<int>[n];
//	v=n;
//}
//
//void Graph::insert(int from, int to)
//{
//	ls[from].push_back(to);
//}
//
//void Graph::getallpair(int s, int d)
//{
//	bool *isVisited = new bool[v];
//	for(int i=0;i<v;i++)
//		isVisited[i] = false;
//	vc.push_back(s); 
//	isVisited[s] = true;
//	getallpairutil(s,d,isVisited);
//}
//
//void Graph::getallpairutil(int s, int d, bool *isVisited)
//{
//	if(s==d)
//	{
//		vector<int>::iterator it;
//		for(it=vc.begin();it!=vc.end();it++)
//			cout<<*it;
//		cout<<endl;
//	}
//	else
//	{
//		list<int>::iterator it1;
//		for(it1=ls[s].begin();it1!=ls[s].end();it1++)
//		{
//			if(isVisited[*it1] == false)
//			{
//				isVisited[*it1] = true;
//				vc.push_back(*it1);
//				getallpairutil(*it1, d, isVisited);
//			}
//		}
//	}
//	vc.pop_back();
//	isVisited[s] = false;
//}
//
//int main()
//{
//	int nodes = 4;
//	int source,dest;
//	Graph g(nodes);
//	g.insert(0,1);
//	g.insert(0,2);
//	g.insert(0,3);
//	g.insert(2,0);
//	g.insert(2,1);
//	g.insert(1,3);
//	source=2;
//	dest=3;
//	g.getallpair(source,dest);
//	return 0;
//}
//
