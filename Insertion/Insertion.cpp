// Insertion.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include "InsertionSort.h"


using namespace std;

void sort(int anArray[], int n);

void printArray(int theArray[], int n);

int main()
{

	InsertionSort<int> sort = InsertionSort<int>();

	int theArray[10] = { 10,9,8,7,6,5,4,3,2,1 };
	int size = sizeof(theArray) / sizeof(theArray[0]);
	printArray(theArray, size);

	sort.insertionSort(theArray, size);
	

	cout << endl << "after insertion sort";

	printArray(theArray,size);

	cin.get();
	cin.get();

    return 0;
}
void printArray(int theArray[], int n)
{
	cout << endl << endl << "the array contains: ";
	for (int i = 0; i < n;i++)
	{
		cout<< theArray[i] << ", ";
	}
}



