/*
Michal Malinowski
Feb 9, 2026
Lab 7, Nested Conditional Statement
*/

#include<iostream>

using namespace std;

int main(){
    cout<<"\n ---- Example 1: Nested Conditional ----"<<endl;
    // Use nested conditional statement to check if a number is positive (even or odd), negative (even ot odd), or zero
    int number = 9;
    if(number>0){
        if(number%2==0)
            cout<<number<<" is positive and even!"<<endl;
        else
            cout<<number<<" is positive and odd!"<<endl;
    }
    else if (number<0){
            if(number%2==0)
            cout<<number<<" is negative and even!"<<endl;
        else
            cout<<number<<" is negative and odd!"<<endl;
    }
    else{
        cout<<number<<" is zero"<<endl;
    }

    cout<<"\n ---- Example 2: Nested Conditional ----"<<endl;
    // Sort three numbers from the highest to the lowest number
    // Declare variables
    int num1, num2, num3;
    // Collect values
    cout<<"Enter Three Numbers: ";
    cin>>num1>>num2>>num3;
    // Conditional statement
    if(num1>num2 && num1>num3){
        cout<<num1<<" num1 is the highest number"<<endl;
        if(num2>num3)
            cout<<num1<<"\t"<<num2<<"\t"<<num3<<endl;
        else
            cout<<num1<<"\t"<<num3<<"\t"<<num2<<endl;
    }
    else if(num2>num1 && num2>num3){
        cout<<num2<<" num2 is the highest number"<<endl;
        if(num1>num3)
            cout<<num2<<"\t"<<num1<<"\t"<<num3<<endl;
        else
            cout<<num2<<"\t"<<num3<<"\t"<<num1<<endl;
    }
    else{
        cout<<num3<<" num3 is the highest number"<<endl;
        if(num1>num2)
            cout<<num3<<"\t"<<num1<<"\t"<<num2<<endl;
        else
            cout<<num3<<"\t"<<num2<<"\t"<<num1<<endl;
    }

    cout<<"\n ---- Example 3: Nested Conditional ----"<<endl;
    // Use operands to check if a number is even or odd
    /*
    if(x%2==0)
        cout<<"Even"<<endl;
    else
        cout<<"Odd"<<endl;
    */

    int x = 5;
    cout<<"The number is "<<(x%2==0 ? "Even" : "Odd")<<endl;

    cout<<"\n ---- Exercise 1 ----"<<endl;
    // Declare variable
    int budget;
    string con1 = " Keep saving!";
    string con2 = " Economy Car:";
    string con3 = " Standard Car:";
    string con4 = " Performance-oriented Car:";
    string con5 = " High-end luxury cars: ";
    string con6 = " Invalid budget!";
    string nes1 = " Compact Car.";
    string nes2 = " Mid-size Car.";
    string nes3 = " Sedan.";
    string nes4 = " Luxury Sedan.";
    string nes5 = " Sports Car.";
    string nes6 = " Supercar.";
    string nes7 = " Maserati or Rolls-Royce?";

    // Collect data
    cout<<"Enter Budget For Your Car = ";
    cin>>budget;

    // Conditional statements
    if(budget<0){
        cout<<con6;
    }
    else if(budget<10000){
        cout<<"With a budget of "<<budget<<" you need to"<<con1<<endl;
    }
    else if(budget>=10000 && budget<=30000){
        cout<<"With a budget of "<<budget<<" you can afford a"<<con2;
        if(budget<=20000)
            cout<<nes1;
        else
            cout<<nes2;
    }
    else if(budget>=30001 && budget<=70000){
        cout<<"With a budget of "<<budget<<" you can afford a"<<con3;
        if(budget<=50000)
            cout<<nes3;
        else
            cout<<nes4;
    }
    else if(budget>=70001 && budget<=150000){
        cout<<"With a budget of "<<budget<<" you can afford a"<<con4;
        if(budget<=100000)
            cout<<nes5;
        else
            cout<<nes6;
    }
    else{
        cout<<"With a budget of "<<budget<<" you can afford"<<con5<<"would you like a"<<nes7;
    }

    cout<<"\n ---- Exercise 2 ----"<<endl;
    // Declare variables
    int num;
    char y_n;

    // Collect data
    cout<<"Enter a Number = ";
    cin>>num;
    cout<<"Would You Like to Double The Number (Y/N) = ";
    cin>>y_n;
    if(y_n == 'Y' || y_n == 'y'){
        cout<<"The number is set to: "<<num * 2<<endl;
    }
    else{
        cout<<"The number is set to: "<<num<<endl;
    }
    
    return 0;
}
