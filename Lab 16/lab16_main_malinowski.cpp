/*
Michal Malinowski
April 14, 2026
Lab 16, Pointers and Into to Array
*/
#include<iostream>

using namespace std;

#include"lab16_function_malinowski.cpp"

int main(){
    cout<<"\n----- Example 1: Pointer and Reference -----"<<endl;
    pointerreference();

    cout<<"\n----- Example 2: Pass Pointer into a Function -----"<<endl;
    string something = "Hello World!";
    printvalue(something);
    printaddress(&something);
    printrefrence(something);

    cout<<"\n----- Example 3: Intro to Array -----"<<endl;
    introarray();

    cout<<"\n----- Example 4: Length of an Array -----"<<endl;
    lengtharray();

    cout<<"\n----- Example 5: Loop through an Array -----"<<endl;
    looparray();

    cout<<"\n----- Example 6: Pass an Array to a Function -----"<<endl;
    // declare an array
    const int s = 3;
    int numbers[s];

    // fill up the array with data
    fillup(s,numbers);

    // print the values in an array
    printarray(s,numbers);

    // Print the max value
    int m = maxnumber(s,numbers);
    cout<<"The maximum number is "<<m<<endl;

    cout<<"\n----- Exercise -----"<<endl;
    exercise();
    return 0;
}

