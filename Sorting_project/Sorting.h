#ifndef SORTING_H
#define SORTING_H
class Sorting
{
private:
	int n;
	int a[100000];
	int res[100000];
public:
	void enter_data();
	void quick_sort_init();
	void quickSort(int[],int,int);
	void display();
};
#endif
