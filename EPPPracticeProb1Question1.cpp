#include <iostream>
#include <string>

using namespace std;

void printArray(int myarray[], int n) {
    for (int i = 0; i < n; i++) {
        cout << myarray[i] << " ";
    cout << endl;
    }
}

int getElement(int myarray[], int n) {
    int largest = 0;
    int secondLargest = 0;
    bool largestBool = true;

    for (int i = 0; i < n; i++) {
        if (myarray[i] > largest) {
            largest = myarray[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (myarray[i] < largest && myarray[i] > secondLargest) {
            secondLargest = myarray[i];
        }
    } 
    return secondLargest;
}

// Implement getElement here


// EDIT CODE BELOW ONLY FOR TESTING (YOUR CODE WILL BE GRADED WITH DIFFERENT TESTS)

int main() {
    {
        int myarray[100] = { 30, 20, 5, 10, 24 };
        int n = 5;
        cout << "Contents of array : ";
        printArray(myarray, n);
        cout << getElement(myarray, n);
        if (getElement(myarray, n) == 24)
            cout << "PASSED" << endl;
        else
            cout << "Result did not match expected answer: 24" << endl;
    }
    {
        int myarray[100] = { 15, 24, 30, 10, 5 };
        int n = 5;
        cout << "Contents of array : ";
        printArray(myarray, n);
        cout << getElement(myarray, n);
        if (getElement(myarray, n) == 24)
            cout << "PASSED" << endl;
        else
            cout << "Result did not match expected answer: 24" << endl;
    }
    return 0;
}
