#include <iostream>
#include <list>
#include <ctime>
#include "sorting.h"

void swap(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selectionSort(int param[], int n)
{
	int i;
	int j;
	int min;
	int temp;

	std::clock_t start;
	start = std::clock();

	for (i = 0; i < n - 1; i++)
	{
		min = i;
		for (j = i + 1; j < n; j++)
			if (param[j] < param[min])
				min = j;
		//swap(&param[min], &param[i]);
		temp = param[min];
		param[min] = param[i];
		param[i] = temp;
	}
	std::clock_t end;
	end = std::clock();
	clock_t ticks = end - start;
	double duration;
	duration = ticks;// / (double)CLOCKS_PER_SEC;

	int z;
	std::cout << duration << " seconds\n";
	std::cout << "Selection Sorted List: ";
	for (z = 0; z < n; z++)
		std::cout << param[z] << " ";
	std::cout << std::endl;
}

void insertionSort(int param[], int n)
{
	int i;
	int j;
	int min;
	int temp;
	int key;

	for (i = 1; i < n; i++)
	{
		key = param[i];
		j = i - 1;
		while (j >= 0 && param[j] > key)
		{
			param[j + 1] = param[j];
			j = j - 1;
		}
		param[j + 1] = key;
	}

	int z;
	std::cout << "Insertion Sorted List: ";
	for (z = 0; z < n; z++)
	{
		std::cout << param[z] << " ";
	}
	std::cout << std::endl;
}

void bubbleSort(int param[], int n)
{
	std::cout << "bubble sort\n";
}

void mergeSort(int param[], int n)
{
	std::cout << "merge sort\n";
}

void heapSort(int param[], int n)
{
	std::cout << "heap sort\n";
}

void quickSort(int param[], int n)
{
	std::cout << "quick sort\n";
}

void menu()
{
	std::cout << "Select an option from below:\n";
	std::cout << "0) Exit\n";
	std::cout << "1) Selection Sort\n";
	std::cout << "2) Insertion Sort\n";

	int a[] = { 5, 2, 3, 10, 7 };
	int n = std::size(a);

	int z;

	std::cin >> z;

	if (z == 1)
		selectionSort(a, n);
	else if (z == 0)
		exit();
	else if (z == 2)
		insertionSort(a, n);
	else
		std::cout << "Not a Selection. Try Again.\n\n";
		menu();
}

int exit()
{
	exit(0);
}