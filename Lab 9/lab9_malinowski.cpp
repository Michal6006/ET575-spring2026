/*
Michal Malinowski
Feb 19, 2026
Lab 9 Getting Help from AI to Build a Temperature Converter
*/
#include<iostream>
using namespace std;
int main(){

    // 1: Use AI to Generate the Code


    double celsius, fahrenheit;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    // Conversion formula
    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;

    // 2: Review and Understand

    // 1. No the AI used everything that has been already covered in class. Probably because of the simplicity of the task.
    // 2. In the conversion formaula they used 9/5 instead of just putting 1.8. This would of saved a little typing but besides that i would change nothing.
    // 3. I looked up 40 C into F and the answer was 104 which is also the answer that the code gives you.

    // 3. User Input
    
    cout<<"Enter temperature in Fahrenheight: ";
    cin>>fahrenheit;

    // Conversion formula
    celsius = (5.0/9.0) * (fahrenheit - 32);
    cout<<fahrenheit<<"*F is "<<celsius<<"*C"<<endl;

    // 4: Add Conversion Choice
    // Declaring Variable
    char choice;
    // Acquiring Choice Character
    cout<<"Choose conversion type: "<<endl;
    cout<<"1. Celsius to Fahrenheit"<<endl;
    cout<<"2. Fahrenheit to Celsius"<<endl;
    cout<<"Enter choice: ";
    cin>>choice;
    // Switch-case Statement
    switch (choice)
    {
    case '1':
        cout<<"Enter temperature in Celsius: ";
        cin>>celsius;
        fahrenheit = (celsius * 9.0 / 5.0) + 32;
        cout<<celsius<<"*C is "<<fahrenheit<<"*F"<<endl;
        break;
    case '2':
        cout<<"Enter temperature in Fahrenheight: ";
        cin>>fahrenheit;
        celsius = (5.0/9.0) * (fahrenheit - 32);
        cout<<fahrenheit<<"*F is "<<celsius<<"*C"<<endl;
        break;
    default:
        cout<<"Error"<<endl;
        break;
    }
    return 0;
}
