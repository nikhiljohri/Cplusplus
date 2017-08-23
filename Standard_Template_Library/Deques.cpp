#include<iostream>
#include "Deques.h"
#include<deque>
#include<list>
#include<algorithm>
using namespace std;

/* Other functions of vectos includes
  vec.empty() returns bool
  vec.clear() clears the vector
  vec.swap(v2) swap data
  vector<int> vec2(vec) copy vector

  insert/del at end O(1)
  insert/del in mid O(n)
  search O(n)
*/

deques::deques()
{
	cout<<"size of deque is"<<deq.size()<<endl;
}

void deques::push(int val)
{
	deq.push_back(val);
	deq.push_front(val);
	cout<<"size of deque is"<<deq.size()<<endl;
}

void deques::display()
{
	for(int i=0;i<deq.size();i++)
	{
		//cout<<"as array "<<vec[i]<<endl;    // no range check
		cout<<"as array "<<deq.at(i)<<endl;   // range check, throw exception
	}
	for(deque<int>::iterator itr=deq.begin() ; itr!=deq.end() ; ++itr)
	{
		cout<<"as itterator "<<*itr<<endl;
	}
}
