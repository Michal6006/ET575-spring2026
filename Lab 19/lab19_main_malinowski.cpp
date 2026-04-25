/*
Michal Malinowski
April 22, 2026
Lab 19, 2D Arrays
*/
const int COLSIZE = 5;
#include<iostream>
using namespace std;

#include"lab19_function_malinowski.cpp"
#include <cstdlib>
#include <ctime>

int main(){
    cout<<"\n----- Example 1: 2D Array -----"<<endl;
    // Initialize a 2d array
    int rowsize = 4;
    int a[rowsize][COLSIZE] ={
    {4, 8, -12},
    {1, -8, 3, 5, 7},
    {-6, 2, 9}
};

    // Call the print function
    print2d(a, rowsize);

    cout<<"\n----- Example 2: 2D Array -----"<<endl;
    printsum(sumevenpositive(a,rowsize));

    cout<<"\n----- Exercise -----"<<endl;
        srand(time(0));

    int arr[3][4];
    char choice;

    do {
        cout<<"-----------------------------"<<endl;

        populate(arr);
        printvaluearray(arr);

        cout<<endl;
        cout<<"Average = "<<average(arr)<<endl;

        cout<<"\nAnother run? (y/n): ";
        cin>>choice;

    }while(choice == 'y' || choice == 'Y');

    return 0;
}
