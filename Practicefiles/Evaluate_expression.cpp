//#include<iostream>
//#include<string>
//#include<stdio.h>
//#include<stack>
//#include<deque>
//#include<map>
//#include<exception>
//using namespace std;
//
//bool validatealpha(const string &, string&);
//bool fullValidate(const string &, double &, string&,  map<char,int> &, deque<int>&);
//void setpriority(map<char,int> &);
//double operate(char,double,double);
//bool operate2(stack<double> &,char);
//
//void main()
//{
//	string exp;
//	string error;
//	double result;
//	map<char,int> m;
//	deque<int>qu;
//	deque<int>::iterator it;	
//	error = "";
//	int x;
//	bool isOK;
//	char toContinue;
//	do
//	{
//		cout<<"enter an expression to evaluate"<<endl;
//		cin>> exp;
//		cout<<"Your expression : "<<exp<<endl;
//		isOK = validatealpha(exp,error);
//		if (isOK == false)
//			cout<<"Error: "<<error<<endl;
//		else
//		{
//			error = "";
//			setpriority(m);
//			cout<<"Postfix format : ";
//			isOK = fullValidate(exp,result,error,m,qu);
//			if (isOK == false)
//				cout<<"Error: "<<error<<endl;
//			else
//				cout<<endl<<"Result of your expression is "<<result<<endl;
//		}
//		cout<<"Do you want to test one more input (y/n)"<<endl;
//		cin>>toContinue;
//		cout<<endl;
//		cout<<"------------------------------------------------------------------"<<endl;
//	} while (toContinue == 'y');
//	
//
//}
//
//void setpriority(map<char,int> &m)
//{
//	m.insert(pair<char,int>('-',1));
//	m.insert(pair<char,int>('+',2));
//	m.insert(pair<char,int>('/',3));
//	m.insert(pair<char,int>('*',4));
//}
//
//bool validatealpha(const string &exp, string &err)
//{
//	int len = exp.size();
//
//	for (int i=0; i<len;i++)
//	{
//		if(!( (57>=exp[i] && exp[i]>=47)||(42>=exp[i] && exp[i]>=40)||(exp[i]==43)||(exp[i]==45)||(exp[i]==38) )) 
//		{
//			err = "Your expression contains some non-mathematical characters";
//			return false;
//		}
//	}
//	return true;
//}
// 
//bool fullValidate(const string &exp, double &result, string &err,  map<char,int> &m, deque<int> &qu)
//{
//	stack<char> st;
//	stack<double> stdig;
//	int len = exp.size();
//	bool ismultidigit;
//	bool nodigit;
//	
//	ismultidigit= false;
//	nodigit = true;
//	for(int i=0;i<len;i++)
//	{
//		if (57>=exp[i] && exp[i]>=48)
//		{
//			int lastint;
//			int currint = exp[i]-'0';
//			
//			if (!(qu.empty()) && (ismultidigit == true))
//			{
//				lastint = (qu.back());
//				currint = (lastint*10) + currint;
//				//st.pop();
//				qu.pop_back();
//				stdig.pop();
//				//st.push(currint);
//				qu.push_back(currint);
//				stdig.push(currint);
//			}
//			else
//			{
//				char *temp = new char();
//				int val;
//				*temp = exp[i];
//				val = atoi(temp);
//				qu.push_back(val);
//				stdig.push(val);
//				delete temp;
//			
//			}
//			nodigit = false;
//			ismultidigit= true;
//			cout<<exp[i];
//		}
//		else
//		{
//
//			if (exp[i] == '(')
//			{
//				st.push(exp[i]);
//				
//			}
//			else if (exp[i] == ')')
//			{
//				if(st.empty())
//				{
//					err = "Braces not balanced - end braces has been used at start";
//					return false;
//				}
//				else
//				{
//					while((st.top() != '('))
//					{
//						
//						char *temp = new char();
//						int val;
//						*temp = st.top();
//						val = atoi(temp);
//						qu.push_back(val);
//						bool check;
//						check =operate2(stdig,st.top());
//						if (check == false) 
//						{
//							err = "something not right with expression";
//							return false;
//						}
//						delete temp;
//						cout<<st.top();
//						st.pop();
//						if (st.empty())
//						{
//							err = "Braces not balanced -no ( is found ";
//							return false;
//						}
//					};
//					
//						st.pop();
//				}
//				ismultidigit = false;
//			}
//			else
//			{
//				if (st.empty() || st.top() == '(')
//					st.push(exp[i]);
//				else
//				{
//					int stvalue;
//					stvalue = m[st.top()];
//					while(!(st.empty()) && m[exp[i]]<=stvalue)
//						{
//							char *temp = new char();
//							int val;
//							*temp = st.top();
//							val = atoi(temp);
//							qu.push_back(val);
//							bool check;
//							check =operate2(stdig,st.top());
//							if (check == false) 
//							{
//								err = "something not right with expression";
//								return false;
//							}
//							cout<<st.top();
//							delete temp;
//							st.pop();
//							if (st.empty()) stvalue = 0;
//							else if(st.top() == '(') stvalue =0;
//							else stvalue = m[st.top()];
//						};
//					
//					st.push(exp[i]);
//				}
//				ismultidigit = false;
//			}
//		}
//	}
//	while(!(st.empty()))
//	{
//		if(st.top() =='(')
//		{
//			err = "Braces not balanced - unclosed (";
//			return false;
//		}
//		char *temp = new char();
//		int val;
//		*temp = st.top();
//		val = atoi(temp);
//		qu.push_back(val);
//		bool check;
//		check =operate2(stdig,st.top());
//		if (check == false) 
//		{
//			err = "something not right with expression";
//			return false;
//		}
//		cout<<st.top();
//		st.pop();
//		delete temp;
//	};
//	if (nodigit == true)
//	{
//		err= "no digits found in the expression";
//		return false;
//	}
//	result = stdig.top();
//	return true;
//}
//
//
//double operate(char op,double op1,double op2)
//{
//	if(op=='+') return op2+op1;
//	else if (op=='-') return op2-op1;
//	else if (op=='*') return op2*op1;
//	else return op2/op1;
//}
//
//bool operate2(stack<double> &stdig,  char c)
//{
//	try
//	{
//		double op1;
//		double op2;
//		if (stdig.empty()) throw -1;
//		op1=stdig.top();
//		stdig.pop();
//		if (stdig.empty()) throw -1;
//		op2= stdig.top();
//		stdig.pop();
//		stdig.push(operate(c,op1,op2));
//		return true;
//	}
//	catch(...)
//	{
//		return false;
//	}
//}
