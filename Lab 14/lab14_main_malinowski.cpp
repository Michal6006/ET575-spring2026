/*
Michal Malinowski
March 18, 2026
Lab 14, Functions
*/
#include<iostream>
#include "lab14_function_malinowski.cpp"
using namespace std;

int main(){
    cout<<"\n----- Example 1: Function calling Function -----"<<endl;
    int calculate = calculatedb(2,3);
    cout<<calculate<<endl;

    cout<<"\n----- Example 2: Recursive Function -----"<<endl;
    cheers(4);

    cout<<"\n----- Example 3: Linear Recursive Function -----"<<endl;
    int n = linearfunction(3);
    cout<<"The Final Result = "<<n<<endl;

    cout<<"\n----- Example 4: Built-in Functions -----"<<endl;
    int side1 = collectnumber();
    int side2 = collectnumber();
    float h = hypotenuse(side1,side2);
    printresult(side1,side2,h);

    cout<<"\n----- Exercise -----"<<endl;
    int x1, y1, x2, y2;
    cout<<"Enter x1 position"<<endl;
    x1 = func1();
    cout<<"\nEnter y1 position"<<endl;
    y1 = func1();
    cout<<"\nEnter x2 position"<<endl;
    x2 = func1(); 
    cout<<"\nEnter y2 position"<<endl;
    y2 = func1();
    float distance = func2(x1, y1, x2, y2);
    func3(x1,y1,x2,y2,distance);



    return 0;
}