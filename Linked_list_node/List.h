#ifndef List_h
#define List_h
class List
{
private:
	Node *start;
public:
	List();
	void enter_list();
	void enter_last_list();
	void enter_rand_list(int);
	void display_list();
	void delete_bydata_list(int);
	void delete_bypos_list(int);
	void reverse_list();
};
#endif