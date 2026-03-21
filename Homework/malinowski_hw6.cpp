/*
Homework 6, more about function, reference and pointer
Michal Malinowski
*/
#include<iostream>
using namespace std;

int main(){
    // Exercise 1
    int* ptr;
    int var = 7;
    int foo = 21;

    ptr = &var;
    cout<<"Pointer 1 = "<<ptr<<endl;
    cout<<"value 1 = "<<*ptr<<endl;

    ptr = &foo;
    cout<<"Pointer 2 = "<<ptr<<endl;
    cout<<"value 2 = "<<*ptr<<endl;

    int& ref = var;
    cout<<"ref = "<<&ref<<endl;
    return 0;
}