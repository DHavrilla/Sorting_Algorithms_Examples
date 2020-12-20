#ifndef SORTING_H
#define SORTING_H

#include <iostream>
#include <list>

/*
1) Create main menu to select sort choice
2) Select from various arrays to sort from
3) Selection Sort
4) Insertion Sort
5) Bubble Sort
6) Merge Sort
7) Heap Sort
8) Quick Sort
*/

void swap(int* xp, int* yp);

void selectionSort(int param[], int n);

void insertionSort(int param[], int n);

void bubbleSort(int param[], int n);

void mergeSort(int param[], int n);

void heapSort(int param[], int n);

void quickSort(int param[], int n);

void menu();

int exit();

#endif