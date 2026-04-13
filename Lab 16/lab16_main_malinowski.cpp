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

    cout<<"\n----- Exercise -----"<<endl;

    return 0;
}

