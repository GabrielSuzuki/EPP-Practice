// EPP Part1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//reads in number of judges, N many
//reads in contestant number
//reads in scores given by judges, N many
//scores are read into an array and uses a function called findAverageScore, uses N and array
//functions drops lowest/highest scores and find the average of it with N-2
//main prints contestant number and average scores until a negative number is inputed
//if a negative number is inputted then print the contestant with the highest score and exit

#include <iostream>
#include <algorithm>
using namespace std;

float findAverageScore(int N, int temparray[])
{
    int i = 0;
    float total = 0;
    int lowest = temparray[0];
    int highest = temparray[0];
    for (int j = 0; j < N; j++) {
        if(temparray[j] < lowest){
            lowest = temparray[j];
        }
        if (temparray[j] > highest) {
            highest = temparray[j];
        }
    }
    while (i < N) {
        total += temparray[i];
        i++;
    }
    total -= (highest + lowest);
    total /= (N - 2);
    return total;
}
int main()
{
    int N = 0;
    int contestantNumber = 0;
    int scores = 0;
    bool positive = true;
    int k = 0;
    int temparray[10] = {};
    float average = 0;
    float highest = 0;
    int highestCont = 0;
    cout << "Enter number of judges\n";
    cin >> N;
    while (positive)
    {           
        cout << "Enter contestant number\n";
        cin >> contestantNumber;
        if (contestantNumber < 0) {
            positive = false;
            cout << "Contestant " << highestCont << " had the highest score: ";
            break;
        }
        k = 0;
        while (k < N) 
        {
            cout << "Enter score: ";
            cin >> scores;
            temparray[k] = scores;
            k++;
        }
        average = findAverageScore(N, temparray);
        cout << "Contestant " << contestantNumber << " " << average <<"\n";
        if (highest < average) {
            highestCont = contestantNumber;
            highest = average;
        }
        //for (int m = 0; m < N; m++) {
        //    temparray[m] = 0;
        //}
    }
}

