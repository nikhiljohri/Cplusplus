// Sorting.cpp : main project file.
#include "stdafx.h"
#include"Sorting.h"
#include<iostream>
using namespace std;

void Sorting::enter_data()
{
	cout<<"enter no. of elements";
	cin>>n;
	cout<<"enter elements";
	for(int i=0;i<n;i++)
		cin>>a[i];
}

void Sorting::quick_sort_init()
{
	quickSort(a,0,n-1);
}

void quickSort(int arr[], int left, int right)
 {
  int i = left, j = right;
  int tmp;
  int pivot = arr[(left + right) / 2];

  /* partition */
  while (i <= j) {
        while (arr[i] < pivot)
              i++;
        while (arr[j] > pivot)
              j--;
        if (i <= j) {
              tmp = arr[i];
              arr[i] = arr[j];
              arr[j] = tmp;
              i++;
              j--;
    }
}
/* recursion */
if (left < j)
    quickSort(arr, left, j);
if (i < right)
        quickSort(arr, i, right);
}