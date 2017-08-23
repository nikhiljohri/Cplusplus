//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//
//class Node
//{
//	char letter;
//	bool isend;
//	int prefix;
//	Node *children[26];
//	vector<string> predict;
//public:
//	void getNode(char);
//	void insert(char*, int, int);
//	void getSuggestion(char *,int,int);
//	bool search(char *,int,int);
//	void findSugg(char*, int,int);
//};
//
//void Node::getNode(char ch)
//{
//	this->letter = ch;
//	for(int i=0;i<26;i++)
//		this->children[i] = NULL;
//}
//
//void Node::insert(char *word,int len,int index)
//{
//	string pred;
//	pred = &word[0];
//	if(index>(len-1))
//	{
//		this->isend = true;
//		cout<<this->letter<<" is marked as end"<<endl;
//	}
//	else
//	{
//		int ind = int(word[index])-int('a');
//		if(children[ind] == NULL)
//		{
//			this->children[ind] = new Node();
//			this->children[ind]->getNode(word[index]);
//			(children[ind]->predict).push_back(pred);
//			cout<<word[index] << " added at index " << ind << " of" << this->letter<<endl;
//		}
//		else
//		{
//			cout<<word[index] << " already exists at index " << ind << " of" << this->letter<<endl;
//			(children[ind]->predict).push_back(pred);
//		}
//		index++;
//		children[ind]->insert(word, len,index);
//	}
//}
//
//void Node::getSuggestion(char *word, int len, int index)
//{
//	bool ret=true;
//	if((len==index))
//	{
//		ret = true;
//		vector<string>::iterator it;
//		for(it=predict.begin();it != predict.end();it++)
//			cout<<*it<<endl;
//	}
//	else
//	{
//		int ind  = int(word[index])-int('a');
//		if(children[ind] == NULL)
//			ret = false;
//		else if((children[ind])->letter != word[index])
//			ret =  false;
//		else
//		{
//			index++;
//			children[ind]->getSuggestion(word, len, index);
//		}
//	}
//	if (ret == false)
//		cout<<"No suggestions available"<<endl;
//}
//
//
//bool Node::search(char *word, int len, int index)
//{
//	bool ret=true;
//	if((len==index) && (this->isend == true))
//	{
//		cout<<" Full word passes"<<endl;
//		ret = true;
//	}
//	else if((len==index) && (this->isend == false))
//	{
//		cout<<"Word failed"<<endl;
//		ret = false;
//	}
//	else
//	{
//		int ind  = int(word[index])-int('a');
//		if(children[ind] == NULL)
//			ret = false;
//		else if((children[ind])->letter != word[index])
//			ret =  false;
//		else
//		{
//			index++;
//			ret = ret && children[ind]->search(word, len, index);
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	Node *root = new Node();
//	root->getNode('1');
//	string word;
//	int choice;
//	int len;
//	char cont;
//	do
//	{
//		cout<<"eneter a word"<<endl;
//		cin>>word;
//		cout<<"u need suggestion or enter the word in dictionary (1/2)"<<endl;
//		cin>>choice;
//		len = word.size();
//		char *tempword; 
//		tempword = &word[0];
//		if(choice == 1)
//			root->getSuggestion(tempword,len,0);
//		else
//		{
//			if(root->search(tempword,len,0))
//				cout<<"word already exist in the dictionary"<<endl;
//			else
//			{
//				root->insert(tempword,len,0);
//				cout<<"word inserted into dictionary"<<endl;
//			}
//		}
//		cout<<"do u want to continue?(n/y)"<<endl;
//		cin>>cont;
//	}while(cont == 'y');
//	return 0;
//}