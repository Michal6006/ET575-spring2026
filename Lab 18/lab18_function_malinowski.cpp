/*
Michal Malinowski
April 20, 2026
Lab 18, Array Application
*/
#include<iostream>
using namespace std;
// Example 1: Search Program
// Function 1: Function to collect up to 5 consecutive positive integers
// The collection will stop if a negative number is entered.
// If there is less than five numbers collected, the function will refrence to the array
void fillarray(int *arr, int &numberuserindex, int arraysize){
    int number = 0, index = 0;
    do{
        cout<<"Enter a positive number: ";
        cin>>number;
        if(number>0){
            arr[index] = number;
            index ++;
        }
    }while(number>0 && index<arraysize);

    // Update the index of the last consecitove positvie number
    numberuserindex = index;
}
// Function 2: Print each element in an array
void printelement(int *arr, int sizearray){
    for(int i = 0; i<sizearray; i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

// Function 3: Search Function
int search(int *arr, int numberuserindex, int target){
    int index = 0;
    bool found = false;

    while(!found && index<numberuserindex){
        if(target == arr[index])
            found = true;
        else
            index++;
    }

    if(found)
        return index;
    else
        return -1;

}

// Exercise
void collectnumber(int *arr, int &index, int arraysize){
    int number = 0;
    index = 0;

    do{
        cout<<"Enter a non-zero number: ";
        cin>>number;
        if (number != 0){
            arr[index] = number;
            index++;
        }
    }while(number != 0 && index < arraysize);
}

float Averagenumber(int *arr, int arraysize){
    int sum = 0;
    for(int i = 0; i < arraysize; i++){
    sum += arr[i];
    }
    return sum/arraysize;
}

int Closestmean(int *arr, int size, float average){
    int closest = arr[0];
    float mindiff = abs(arr[0] - average);
    for(int i = 1; i < size; i++){
        float diff = abs(arr[i] - average);
        if(diff < mindiff){
            mindiff = diff;
            closest = arr[i];
        }
    }
    return closest;
}

void Printresults(int avg, int num){
    cout<<"The closest number to average "<<avg<<" is "<<num<<"."<<endl;
}