//// Name:Nikhil Johri
//// USN:niks0907@gmail.com
//// Summary:
//
//#include <iostream>
//#include <string>
//#include <map>
//using namespace std;
//
//// Remove additional cin/cout/printf/scanf statements before submission
//const string GetPassphrase(const string generatedWord)
//{
//    /* Your code goes here */
//	map<char,int> mp;
//	int no_of_odd = 0;
//	char odd_char;
//	int odd_char_count = 0;
//	int counter = 0;
//	int len= generatedWord.size();
//	char* str = new char[len];
//	for(int i=0;i<len;i++)
//	{
//		std::map<char, int>::iterator it = mp.find(generatedWord[i]); 
//		if (it != mp.end())
//			it->second = it->second++;
//		else
//			mp.insert(pair<char,int>(generatedWord[i],1));
//	}
//	map<char, int>::iterator it;
//	for(it=mp.begin();it!=mp.end();it++)
//	{
//		if (it->second%2 == 0)
//		{
//			int times = it->second / 2;
//			for (int j=0;j<times;j++)
//			{
//				str[counter]=it->first;
//				str[len-counter-1]=it->first;
//				counter++;
//			}
//		}
//		else
//		{
//			no_of_odd++;
//			odd_char = it->first;
//			odd_char_count = it->second;
//		}
//	}
//
//	if (no_of_odd > 1)
//		return "no";
//	else
//	{
//		for(int k=0;k<odd_char_count;k++)
//		{
//			str[counter] = odd_char;
//			counter++;
//		}
//		return str;
//	}
//}
//
//
//int main (void) 
//{
//    string str;
//    cin >> str;
//    cout << GetPassphrase(str);
//    return 0;
//}
