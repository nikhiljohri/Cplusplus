//#include<iostream>
//#include<vector>
//
//using namespace std;
//vector<int> v;
//
//void heapify();
//void bottom_down(int);
//void bottom_up(int);
//void insert(int);
//void display();
//void delete_min();
//void display();
//
//int main()
//{
//	int arr[6] = {10,7,9,30,3,300};
//	int element;
//	for(int i=0;i<6;i++)
//	{
//		v.push_back(arr[i]);
//	}
//	heapify();
//	cout<<"after heapify"<<endl;
//	display();
//	cout<<"enter new element"<<endl;
//	cin>>element;
//	insert(element);
//	cout<<"after insert"<<endl;
//	display();
//	delete_min();
//	cout<<"after delete"<<endl;
//	display();
//	return 0;
//}
//
//void delete_min()
//{
//	int len = v.size();
//	v[0] = v[len-1];
//	v.pop_back();
//	bottom_down(0);
//}
//
//void insert(int element)
//{
//	int len = v.size();
//	v.push_back(element);
//	bottom_up(len);
//}
//
//void bottom_up(int index)
//{
//	if(index==0)
//		return;
//	else
//	{
//		int min_index = (index-1)/2;
//		if(v[min_index]>v[index])
//		{
//			int temp = v[min_index];
//			v[min_index] = v[index];
//			v[index] = temp;
//			bottom_up(min_index);
//		}
//	}
//}
//
//void display()
//{
//	vector<int>::iterator it;
//	for(it= v.begin();it!= v.end(); it++) cout<<*it<<endl;
//}
//
//void heapify()
//{
//	for(int i=v.size()-1;i>=0;i--)
//	{
//		bottom_down(i);
//	}
//}
//
//void bottom_down(int index)
//{
//	int left = 2*index +1;
//	int right = 2*index + 2;
//	int min_index = index;
//	if (left>=v.size()) return;
//	if(v[left]<v[index]) min_index = left;
//	if(right<v.size()) 
//	{
//		if (v[right]<v[min_index]) min_index = right;
//	}
//	if (min_index != index)
//	{
//		int temp = v[min_index];
//		v[min_index] = v[index];
//		v[index] = temp;
//		bottom_down(min_index);
//	}
//}
