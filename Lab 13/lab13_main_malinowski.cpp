/*
Michal Malinowski
March 16, 2026
Lab 13, Introduction to Functions
*/
#include<iostream>
#include "lab13_function_malinowski.cpp"

using namespace std;

int main(){
    cout<<"\n----- Example 1: Void Function -----"<<endl;
    printHello();
    printHello();

    cout<<"\n----- Example 2: Passes Values -----"<<endl;
    greeting("Peter");
    greeting("Annie");

    cout<<"\n----- Example 3: Triple a Number -----"<<endl;
    int n = triplenumber(3);
    cout<<n<<endl;
    cout<<triplenumber(5)<<endl;

    cout<<"\n----- Example 4: Check a Number -----"<<endl;
    cout<<checknumber(-10)<<endl;
    cout<<checknumber(0)<<endl;
    cout<<checknumber(5)<<endl;

    cout<<"\n----- Example 5: Function Composition -----"<<endl;
    // int area_rec = arearectangle(validatepositive(), validatepositive());
    int length = validatepositive();
    int width = validatepositive();

    int area_rec = arearectangle(length, width);

    printarea(length, width, area_rec);

    cout<<"\n----- Exercise -----"<<endl;
    return 0;
}