/*
Michal Malinowski
March 18, 2026
Lab 14, Functions
*/
#include<iostream>

using namespace std;

// Example 1: Function calling Function
int multiply(int a, int b){
    return a*b;
}

int calculatedb(int x, int y){
    // Function calling function
    return 2*multiply(x,y);
}

// Example 2: Recursive Function
void cheers(int n){
    // base case
    if (n == 1){
        cout<<"STOP"<<endl;
    }
    // recursive case
    else{
        cout<<(n*2)<<endl;
        cheers(n-1);
    }
}

/* Table of Analysis
Function    |           |               |   else        |
Iteration   |   int n   |   if(n==1)    |   cout<<(n*2) |   cheer(n-1)
-----------------------------------------------------------------------------
    1       |   n = 4   |   false       | cout(4*2) = 8 |   cheer(4-1 = 3)
    2       |   n = 3   |   false       | cout(3*2) = 6 |   cheer(3-1 = 2)
    3       |   n = 2   |   false       | cout(2*2) = 4 |   cheer(2-1 = 1)
    4       |   n = 1   |   ture        |  cout<<STOP   |   

*/

// Example 3: Linear Recursive Function
int linearfunction(int m){
    if (m>10){
        return -6;
    }
    else{
        return (linearfunction(m+2) * (m-4));
    }
}

/* Table of Analysis
Function            
Iteration   |   int m   |   if(m>10)    |   else{return (linearfunction(m+2) * (m-4));}    |
-----------------------------------------------------------------------------
    1       |   m = 3   |   false       |   return (linearfunction(3+2 = 5) * (3-4 = -1))
    2       |   m = 5   |   false       |   return (linearfunction(5+2 = 7) * (5-4 = 1)) *-1
    3       |   m = 7   |   false       |   return (linearfunction(7+2 = 9) * (7-4 = 3)) *1*-1
    4       |   m = 9   |   false       |   return (linearfunction(9+2 = 11) * (9-4 = 5)) *3*1*-1
    5       |   m = 11  |   true        |   return -6

    Final Result = -6*5*3*1*-1 = 90
*/

// Example 4: Built-in Functions
// Program to calculate the hypotenuse of a right triangle
// Function collets a number and return the number if it's positive
int collectnumber(){
    int n;
    cout<<"Enter a Positive Number: ";
    cin>>n;

    // recursive function to validate if n is positive
    if(n<=0){
        cout<<"Error! ";
        return collectnumber();
    }
    else{
        return n;
    }
}
#include<cmath>

// calculate and return the hypotenuse
float hypotenuse(int side1, int side2){
    return sqrt(pow(side1,2) + pow(side2,2));
}

// Print Result
void printresult(int side1, int side2, float h){
    cout<<"The hypotenuse with sides "<<side1<<" and "<<side2<<" is = "<<h<<endl;
}

// Exercise
// Function 1
int func1(){
    int n;
    cout<<"Enter a number greater than Zero: ";
    cin>>n;
    if(n>=0){
        cout<<"Error! ";
        return func1();
    }
    else{
        return n;
    }
}

// Function 2
// #include<cmath>
float func2(){
    int x1,x2,y1,y2;
    cout<<"Enter inital x position (x1): ";
    cin>>x1;
    cout<<"Enter final x position (x2): ";
    cin>>x2; 
    cout<<"Enter inital y position (y1): ";
    cin>>y1; 
    cout<<"Enter inital x position (y2): ";
    cin>>y2;
    float distance;
    distance = sqrt(pow((x2-x1),2)+ pow((y2-y1),2));
    return distance;
}

// Function 3
void func3(int x1,int x2, int y1, int y2, float distance){
    cout<<"The distance of points("<<x1<<","<<x2<<") and ("<<y1<<","<<y2<<") is "<<distance;
}

