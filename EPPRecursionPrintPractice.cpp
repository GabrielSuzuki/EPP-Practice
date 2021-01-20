// EPPRecursionPrintPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <iostream>
void printArray(int arr[], int n) {
    if (n < sizeof(arr)) {
        cout << arr[n] << " ";
        n++;
        printArray(arr, n);
    }
    else {
        cout << "";
    }
}

int main()
{
    int arr[] = { 2, 3, 4 };
    int n = 0;
    printArray(arr, n);
}

