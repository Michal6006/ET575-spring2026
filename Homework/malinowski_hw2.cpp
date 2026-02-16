/* 
Homework 2: Branching 
Michal Malinowski
*/ 
#include<iostream>
using namespace std;

int main(){
    //Program 1
    cout<<"\n ---- Program 1 ----"<<endl;
    // Declare Variables
    int age;

    // Collect Data
    cout<<"\nEnter your age: ";
    cin>>age;

    // Multiway Condition Statement
    if (age<=0 | age>120){
        cout<<"Invalid age. Please enter a valid age."<<endl;
    }
    else if(age<13)
        cout<<"Not eligible for any activities."<<endl;
    else if (age>=13 && age<=17)
        cout<<"Eligible for youth activities."<<endl;
    else if (age>=18 && age<=64)
        cout<<"Eligible for adult activities."<<endl;
    else
        cout<<"Eligible for senior activities."<<endl;

    // Program 2
    cout<<"\n ---- Program 2 ----"<<endl;
    // Declare Variables
    int num1;
    int num2;
    int sum;

    // Data Collection and Program Description
    cout<<"\nEnter 2 numbers to be added together to maybe display a message."<<endl;
    cout<<"Enter Number 1: ";
    cin>>num1;
    cout<<"Enter Number 2: ";
    cin>>num2;
    
    // Multiway Condition Statement with Nesting
    sum = num1 + num2;
    if (sum>=1 && sum<=100){
        if (sum % 5 == 0)
            cout<<sum<<" is a pentagon"<<endl;
        else if (sum % 2 != 0)
            cout<<sum<<" is an odd guess"<<endl;
    }
    else if(sum>=101 && sum<=200){
        cout<<"The new lucky number is "<<sum<<endl;
    }
    else if(sum>=201 && sum<=999){
        cout<<sum<<" is a dreaming number"<<endl;
    }
    else if(sum>=1000){
        if (sum % 2 == 0)
            cout<<sum<<" approaches to the infinite evenly!"<<endl;
        else if (sum >= 2000)
            cout<<sum<<" approaches to the infinite and beyond!"<<endl;
    }
    else
        cout<<"False alarm! The sum is "<<sum<<endl;
    
    // Program 3
    cout<<"\n ---- Program 3 ----"<<endl;

    // Declare Variables
    char option;
    float cel;
    float fah;
    float kel;

    // Prompt Message
    cout<<"\nTemperature Conversion Menu:"<<endl;
    cout<<"1. Celsius to Fahrenheit"<<endl;
    cout<<"2. Fahrenheit to Celsius"<<endl;
    cout<<"3. Kelvin to Celsius"<<endl;
    cout<<"4. Kelvin to Fahrenheit"<<endl;
    cout<<"5. Exit"<<endl;
    cout<<"Enter a number (1-5): ";

    // Collect Input
    cin>>option;

    // Switch-Case Statments
    switch (option)
    {
    case '1':
        cout<<"Celsius to Fahrenheit"<<endl;
        cout<<"Enter the Temperature in Celsius: ";
        cin>>cel;
        fah = (cel*9/5+32);
        cout<<cel<<"* Celsius is equal to "<<fah<<"* Fahrenheit"<<endl;
        break;

    case '2':
        cout<<"Fahrenheit to Celsius"<<endl;
        cout<<"Enter the Temperature in Fahrenheit: ";
        cin>>fah;
        cel = ((fah-32)*5/9);
        cout<<fah<<"* Fahrenheit is equal to "<<cel<<"* Celsius"<<endl;
        break;

    case '3':
        cout<<"Kelvin to Celsius"<<endl;
        cout<<"Enter the Temperature in Kelvin: ";
        cin>>kel;
        cel = (kel - 273.15);
        cout<<kel<<"* Kelvin is equal to "<<cel<<"* Celsius"<<endl;
        break;

    case '4':
        cout<<"Kelvin to Fahrenheit"<<endl;
        cout<<"Enter the Temperature in Kelvin: ";
        cin>>kel;
        fah = ((kel - 273.15)*9/5+32);
        cout<<kel<<"* Kelvin is equal to "<<fah<<"* Fahrenheit"<<endl;
        break;

    case '5':
        cout<<"Menu Exited"<<endl;
        break;

    default:
        cout<<"Invalid Input"<<endl;
        break;
    }
    return 0;

}
