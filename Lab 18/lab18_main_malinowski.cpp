/*
Michal Malinowski
April 20, 2026
Lab 18, Array Application
*/

#include<iostream>
using namespace std;

#include"lab18_function_malinowski.cpp"

int main(){
    cout<<"\n----- Example 1: Search Function -----"<<endl;
    // Declare the array size
    const int ARRAYSIZE = 5;
    // Declare the array
    int a[ARRAYSIZE];
    // Declare the array size if there is less than five consecutive positive numbers
    int listsize;
    // Decalre the variable to save target
    int searchnumber = 20;

    // Call function fillarray
    fillarray(a, listsize, ARRAYSIZE);
    // Testing listsize
    cout<<listsize<<endl;

    // Call function 2
    printelement(a, listsize);

    // Call function 3
    int foundindex = search(a, listsize, searchnumber);
    cout<<"Test search index "<<foundindex<<endl;

    cout<<"\n----- Exercise -----"<<endl;
    const int a_size = 5;
    int ex_a[a_size];
    int l_size;
    collectnumber(ex_a, l_size, a_size);
    float avg = Averagenumber(ex_a, a_size);
    int closest = Closestmean(ex_a, a_size, avg);
    Printresults(avg,closest);
    return 0;
}

