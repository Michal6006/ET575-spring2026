/*
Homework 9: Array Application
Michal Malinowski
*/

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

// Function To Get A Valid Array Size Between 1 And 100
int arraysize(){
    int size;
    do{
        cout<<"Enter an array size between 1 and 100: ";
        cin>>size;
    }while(size<1 || size>100);
    return size;
}

// Function To Populate Array With Random Numbers Between 10 And 30
void randPopulate(int arr[], int size){
    for(int i=0; i<size; i++){
        arr[i] = rand()%21 + 10;
    }
}

// Function To Print Array Values
void print(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

// Function To Reverse The Array
void reverse(int arr[], int size){
    for(int i=0; i<size/2; i++){
        int temp = arr[i];
        arr[i] = arr[size-1-i];
        arr[size-1-i] = temp;
    }
}

int main(){
    srand(time(0));

    int sizearray = arraysize();  // Get array size
    int noise[sizearray];         // Declare array with the obtained size

    // Populate array with random values
    randPopulate(noise, sizearray);

    // Display original array
    cout<<"Original Set:"<<endl;
    print(noise, sizearray);

    // Reverse the array
    reverse(noise, sizearray);

    // Display reversed array
    cout<<endl<<"Reversed Set:"<<endl;
    print(noise, sizearray);

    return 0;
}