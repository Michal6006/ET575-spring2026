/*
Michal Malinowski
March 16, 2026
Lab 13, Introduction to Functions
*/
#include<iostream>
using namespace std;

// Example 1: Void Function. Void Functions -----
void printHello(){
    cout<<"Hello World!"<<endl;
    return; 
}

// Example 2: Functions that pass calues
void greeting(string username){
    cout<<"Welcome to function "<<username<<endl;
}

// Example 3: Function that passes and returns a value
// Function that passes a number and returns the triple of a number
int triplenumber(int number){
    return number *3;
}

// Example 4: Function to check if a number is positive, negative, or zero
// Thus function returns a string

string checknumber(int number){
    if(number>0){
        return "positive";
    }
    else if(number<0){
        return "negative";
    }
    else{
        return "zero";
    }
    }

    // Example 5: Composition Function
    // Function 1: to Validate that a number is positive
    // Function only returns a positive number
    int validatepositive(){
        int n;
        cout<<"Enter a number: ";
        cin>>n;
    
        // Recollect the number if the number is not positive
        while(n<0){
            cout<<"Enter a positive number: ";
            cin>>n;
        }

        return n;
    }
    // Function 2: function to calculate and return the area
    int arearectangle(int length, int width){
        return length*width;
    }
    // Function 3: Print the Result
    void printarea(int length, int width, int area){
        cout<<"The are of a rectangle with a length of "<<length<<" and a width of "<<width<<" is "<<area<<endl;
    }
