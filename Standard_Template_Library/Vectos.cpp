#include<iostream>
#include "Vectors.h"
#include<vector>
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

vectors::vectors()
{
	cout<<"size of vector is"<<vec.size()<<endl;
}

void vectors::push(int val)
{
	vec.push_back(val);
	cout<<"size of vector is"<<vec.size()<<endl;
}

void vectors::display()
{
	for(int i=0;i<vec.size();i++)
	{
		//cout<<"as array "<<vec[i]<<endl;    // no range check
		cout<<"as array "<<vec.at(i)<<endl;   // range check, throw exception
	}
	for(vector<int>::iterator itr=vec.begin() ; itr!=vec.end() ; ++itr)
	{
		cout<<"as itterator "<<*itr<<endl;
	}
}
