/*
Michal Malinowski
April 22, 2026
Lab 19, 2D Arrays
*/
#include<iostream>
using namespace std;
// Example 1: Function to print the elements in a 2D array
void print2d(int arr[][5], int rowsize){
    for(int row = 0; row < rowsize; row++){
        for(int col = 0; col < 5; col++){
            cout<<arr[row][col]<<"\t";
        }
        cout<<endl;
    }
}

// Example 2: Function to sum all even positive numbers in a 2D array
int sumevenpositive(int arr[][COLSIZE], int rowsize){
    int sumallevenpositive = 0;
    for(int row = 0; row < rowsize; row++){
        for(int col = 0; col < COLSIZE; col++){
            if(arr[row][col] > 0 && arr[row][col] % 2 == 0)
                sumallevenpositive += arr[row][col];
        }
        cout<<endl;
    }
    return sumallevenpositive;
}

void printsum(int sumallevenpositive){
    cout<<"The result is "<<sumallevenpositive<<endl;
}

// Exercise
#include <cstdlib>
#include <ctime>

// Function to populate the 2D array with random numbers (0–100)
void populate(int arr[3][4]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            arr[i][j] = rand() % 101;
        }
    }
}

// Function to print the 2D array
void printvaluearray(int arr[3][4]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cout<<arr[i][j] << "\t";
        }
        cout<<endl;
    }
}

// Function to calculate and return the average
double average(int arr[3][4]){
    int sum = 0;
    int count = 0;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            sum += arr[i][j];
            count++;
        }
    }

    return (double)sum / count;
}