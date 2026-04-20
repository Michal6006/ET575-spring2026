/*
Michal Malinowski
April 16, 2026
Lab 17, Passing Array in a Function
*/
#include<iostream>
using namespace std;

// Function to sum all even numbers in the array
int sum_even(int *arr, int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        if (arr[i] % 2 == 0){
            sum += arr[i];
        }
    }
    return sum;
}

// Function to count negative numbers in the array
int count_negative(int *arr, int size){
    int count = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] < 0){ 
            count++;
        }
    }
    return count;
}

// Example
int main(){
    int arr[] = {3, -2, 4, -7, 10, -1};
    int size = 6;

    cout<<"Sum of even numbers: "<<sum_even(arr, size)<<endl;
    cout<<"Count of negative numbers: "<<count_negative(arr, size)<<endl;

    return 0;
}