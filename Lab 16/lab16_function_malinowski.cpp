/*
Michal Malinowski
April 14, 2026
Lab 16, Pointers and Into to Array
*/
#include<iostream>

using namespace std;

// Example 1: Pointer and Reference
void pointerreference(){
    int num = 12;
    char syn = 'T';
    string n = "Peter";

    // Declare the pointers
    int* pointerint;
    char* pointerchar;
    string* pointerstring = &n; // declared and intizalized pointer value

    // Check a pointer ==> show memory address
    cout<<"int pointer "<<pointerint<<endl;

    // Assign value to a pointer
    pointerint = &num;
    pointerchar = &syn;

    // check pointers' value
    cout<<"int pointer = "<<pointerint<<endl;
    cout<<"char pointer = "<<pointerchar<<endl;
    cout<<"string pointer = "<<pointerstring<<endl;

    // Use derefrence operator to print the calue of th epointer memmory address
    cout<<"value of int pointer = "<<*pointerint<<endl;
    cout<<"value of the char pointer = "<<*pointerchar<<endl;
    cout<<"value of the string pointer = "<<*pointerstring<<endl;

}

// Example 2: Pass pointer into a function
// Pass a value
void printvalue(string n){
    cout<<"Value = "<<n<<endl;
}

// Pass a pointer
void printaddress(string* n){
    cout<<"Pointer = "<<n<<endl;
}

// Passing a refrence value
void printrefrence(string& n){
    cout<<"Pointer value = "<<n<<endl;
}

// Example 3: Array
void introarray(){
    // Declare an array of size 5
    int scores[5];

    // Assign values to an array. Using indexing to access to each cell in an array. Indexing starts from 0
    scores[0] = 90; // accesing the first (most-left) cell in array scores
    scores[1] = 70;
    scores[2] = 86;
    scores[3] = 92;
    scores[4] = 60; 

    // Find the average of the scores
    float average = (scores[0]+scores[1]+scores[2]+scores[3]+scores[4])/5.0;
    cout<<"The average is "<<average<<endl;

    // Intitalize an array
    char symbols[3] = {'%', '$', '#'};
    cout<<"The second symbol is = "<<symbols[1]<<endl;

    // Initialize an array without an arrays's suze
    string names[] = {"Peter","Annie"};

    cout<<"The first name is = "<<names[0]<<endl;
}

// Exercise
void exercise(){
    int scores [5] = {60,90,75,88,100};

    int lowest = scores[0];
    for (int i = 1; i < 6; i++){
        if (scores[i] < lowest){
            lowest = scores[i];
        }
    }
    cout<<"The lowest score is: "<<lowest<<endl;
}