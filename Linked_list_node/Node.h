#ifndef node_h
#define node_h
class Node
{
private:
	int data;
public:
	Node *next;
	void give_value();
	void show_value();
	int return_data();
};
#endif