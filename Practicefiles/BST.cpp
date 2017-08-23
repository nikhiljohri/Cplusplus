//#include<iostream>
//#include<stdio.h>
//#include<vector>
//
//using namespace std;
//
//class treeNodes
//{
//	int val;
//	treeNodes *root;
//	static vector<int> vnode;
//	treeNodes *left;
//	treeNodes *right;
//public:
//
//	treeNodes(int val)
//	{
//		this->val = val;
//	}
//	 void add(int);
//	 void insert(int);
//	 bool search(int);
//	 bool find(int);
//	 void traverse();
//	 void display(int);
//	 int treeheight();
//	 int calheight();
//	 bool checkBalance();
//	 bool treeBalance();
//	 void leveloreder();
//	 void travleveloreder(int);
//	 void zigzag();
//	 void travzigzag(int,bool);
//	 void getbalancedtree();
//	 void binsert(int,int);
//	 treeNodes()
//	 {
//		 root = NULL; 
//		 left = NULL; 
//		 right = NULL;
//		 
//	 }
//
//};
//
//
//vector<int> treeNodes::vnode;
//
//void treeNodes::add(int val)
//{
//	
//	if (val<=this->val)
//	{
//		if(left==NULL)
//		{
//			left = new treeNodes(val);
//			left->left=NULL;
//			left->right=NULL;
//			cout<<val<< " added at left of "<<this->val<<endl;
//		}
//		else 
//			left->add(val);
//	}
//	else if (val>this->val)
//	{
//		if (right ==NULL)
//		{
//			right = new treeNodes(val);
//			right->right=NULL;
//			right->left=NULL;
//			cout<<val<< " added at right of " <<this->val<<endl;
//		}
//		else
//			right->add(val);
//	}
//}
//
//void treeNodes::insert(int val)
//{
//	if(root==NULL)
//	{
//		root = new treeNodes(val);
//		root->left=NULL;
//		root->right =NULL;
//		cout<<val<<" added at root"<<endl;
//	}
//	else
//		root->add(val);
//}
//
//bool treeNodes::search(int val)
//{
//	bool ret;
//	if (root ==NULL)
//		ret = false;
//	else
//		ret = root->find(val);
//	return ret;
//}
//
//bool treeNodes::find(int val)
//{
//	if(this->val == val)
//		return true;
//	else if(this->val>val)
//	{
//		if(this->left == NULL)
//			return false;
//		else
//			left->find(val);
//	}
//	else if(this->val<val)
//	{
//		if(this->right == NULL)
//			return false;
//		else
//			right->find(val);
//	}
//	else 
//		return false;
//}
//
//void treeNodes::traverse()
//{
//	if(root == NULL)
//		cout<<"tree is empty"<<endl;
//	else
//		cout<<"Infix traversal"<<endl;
//		root->display(1);
//		cout<<endl;
//		cout<<"prefix traversal"<<endl;
//		root->display(2);
//		cout<<endl;
//		cout<<"postfix traversal"<<endl;
//		root->display(3);
//		cout<<endl;
//}
//
//void treeNodes::display(int flag)
//{
//	if(flag ==1)
//	{
//		if (left != NULL)
//			left->display(1);
//		cout<<val;
//		vnode.push_back(val);
//		if (right != NULL)
//			right->display(1);
//	}
//	else if (flag ==2)
//	{
//		cout<<val;
//		if (left != NULL)
//			left->display(2);
//	    if (right != NULL)
//			right->display(2);
//	}
//	else
//	{
//		if (left != NULL)
//			left->display(3);
//	 	if (right != NULL)
//			right->display(3);
//		cout<<val;
//	}
//}
//
//int treeNodes::treeheight()
//{
//	int ret;
//	if ((root == NULL))
//		ret = 0;
//	else
//		ret = root->calheight();
//	return (ret-1);
//}
//
//int treeNodes::calheight()
//{
//	int lh=0;
//	int rh=0;
//	if(this==NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		lh = 1 + left->calheight();
//		rh = 1 + right->calheight();
//		if(lh>rh)
//		{
//			return (lh);
//		}
//		else
//		{
//			return (rh);
//		}
//	}
//}
//
//bool treeNodes::checkBalance()
//{
//	bool isBalanced;
//	if (root==NULL)
//	{
//		cout<<"tree does not exist"<<endl;
//		return true;
//	}
//	isBalanced = root->treeBalance();
//	if (isBalanced == false)
//	{
//		cout<<" Binary search tree is not balanced"<<endl;
//		return false;
//	}
//	else
//	{
//		cout<<" Binary search tree is balanced"<<endl;
//		return true;
//	}
//}
//
//bool treeNodes::treeBalance()
//{
//	bool check=true;
//	if (abs(left->calheight() - right->calheight())>1)
//	{
//		check = false;
//	}
//	else
//	{
//		if (left != NULL)
//			check =  check && left->treeBalance();
//		if (right !=NULL)
//			check = check && right->treeBalance();
//	} 
//	return check;
//}
//
//void treeNodes::leveloreder()
//{
//	int h = treeheight();
//	if (root ==NULL)
//		cout<<"tree is empty"<<endl;
//	for(int i=1;i<=h+1;i++)
//	{
//		root->travleveloreder(i);
//	}
//}
//
//void treeNodes::travleveloreder(int level)
//{
//	if(level == 1)
//		cout<<val;
//	else
//	{
//		if(left!=NULL)
//			left->travleveloreder(level-1);
//		if(right!=NULL)
//			right->travleveloreder(level-1);
//	}
//}
//
//void treeNodes::zigzag()
//{
//	int h = treeheight();
//	int flag = true;
//	if (root ==NULL)
//		cout<<"tree is empty"<<endl;
//	for(int i=1;i<=h+1;i++)
//	{
//		root->travzigzag(i,flag);
//		flag = !flag;
//	}
//}
//
//void treeNodes::travzigzag(int level, bool flag)
//{
//	if(level == 1)
//		cout<<val;
//	else
//	{
//		if(flag == true)
//		{
//			if(left!=NULL)
//				left->travzigzag(level-1,flag);
//			if(right!=NULL)
//				right->travzigzag(level-1,flag);
//		}
//		else
//		{
//			if(right!=NULL)
//				right->travzigzag(level-1,flag);
//			if(left!=NULL)
//				left->travzigzag(level-1,flag);
//		}
//	}
//}
//
//void treeNodes::getbalancedtree()
//{
//	int size = vnode.size();
//	int leftval = 0;
//	int rightval = size-1;
//	binsert(leftval,rightval);
//}
//
//void treeNodes::binsert(int l, int r)
//{
//	int index = (l+r)/2;
//	if (l>r){}
//	else
//	{
//		insert(vnode[index]);
//		binsert(l,index-1);
//		binsert(index+1,r);
//	}
//}
//
//int main()
//{
//	int num;
//	int height;
//	int searchnum;
//	char choice;
//	treeNodes node;
//	treeNodes bnode;
//	cout<<"---------Enter Non Digit Value To Stop The Process----------"<<endl;
//	do
//	{
//		cout<<"enter digit to enter in the tree"<<endl;
//		cin>>num;
//		if (!cin.fail())
//			node.insert(num);
//	} while (!cin.fail());
//	cin.clear();
//	cin.ignore();
//	cout<<"---------------------------------------------------------------"<<endl;
//	cout<<"Traversal of the tree is"<<endl;
//	node.traverse();
//	cout<<"---------------------------------------------------------------"<<endl;
//	cout<<"tree elements in level order format"<<endl;
//	node.leveloreder();
//	cout<<endl;
//	cout<<"---------------------------------------------------------------"<<endl;
//	cout<<"tree elements in zig-zag format"<<endl;
//	node.zigzag();
//	cout<<endl;
//	cout<<"---------------------------------------------------------------"<<endl;
//	height  = node.treeheight();
//	cout<<"Height of the tree is "<<height<<endl;
//	cout<<"---------------------------------------------------------------"<<endl;
//	cout<<"Checking balancing of the tree..."<<endl;
//	bool isbalan = node.checkBalance();
//	cout<<"---------------------------------------------------------------"<<endl;
//	if(isbalan==false)
//	{
//		cout<<"Showing steps to balance the tree"<<endl;
//		bnode.getbalancedtree();
//		bnode.traverse();
//		cout<<"---------------------------------------------------------------"<<endl;
//	}
//	do
//	{
//	cout<<"enter digit to search in the tree"<<endl;
//		cin>>searchnum;
//		if (!cin.fail())
//		{
//			if(node.search(searchnum))
//				cout<<searchnum<<" found in the tree"<<endl;
//			else
//				cout<<searchnum<<" is not present in the tree"<<endl;
//		}
//	} while (!cin.fail());
//	cin.clear();
//	cin.ignore();
//	return 0;
//}
//
//
