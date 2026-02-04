/*
Michal Malinowski
Feb 4, 2026
Lab 6, Control Flow
*/

#include<iostream>
using namespace std;

int main(){
    cout<<"\n ---- Example 1: Bool Variables ----"<<endl;
    //bool variables return a 1 for True or a 0 for False
    bool ispositive;
    int number;

    cout<<"Enter a number: ";
    cin>>number;

    ispositive = number > 0;

    cout<<"Is "<<number<<" positive? "<<ispositive<<endl;

    cout<<"\n ---- Example 2: If Statements ----"<<endl;   
    // if statemnts will run the codes in between the curly braces if the statment is TRUE
    int num1 = 3;
    int num2 = 5;
    
    if(num1 == num2){
        cout<<"The numbers are equal"<<endl;
    }

    cout<<"End of Example 2"<<endl;

    cout<<"\n ---- Example 3: If-Else Statements ----"<<endl;
    // if-else works as a switch. If 'if' statment is ture, the program will run the code of the if statments and ignore the code of the else statement
    // example to check which number, num1 or num2, is greater.
    if(num1>num2){
        cout<<"num1 is greater than num2"<<endl;
    }
    else{
        cout<<"num2 is greater than num1"<<endl;
    }

    cout<<"\n ---- Example 4: Multiway Statement ----"<<endl;
    // multiway checks more than 2 conditions
    // example compare if num1 is equal to, greater than, less than num 2
    if(num1 == num2){
        cout<<"num1 is equal to num2"<<endl;
    }
    else if(num1>num2){
        cout<<"num1 is greater than num2"<<endl; 
    }
    else{
        cout<<"num2 is greater than num1"<<endl;
    }

    cout<<"\n ---- Example 5: Multiway Statement: Find The Color Depending On The Wavelength ----"<<endl;
    /*
    - Ultraviolet: less than 379 nm and greater than or equal to 10 nm
    - Blue: 380 nm to 520 nm
    - Green: 521 nm to 590 nm
    - Red: 591 nm to 740 nm
    - Infrared: more than 741 nm
    - Any wavelength less than 10 nm is undefined.
    */

    // declare variables
    int wavelength = 0;
    string color;

    // collect the wavelength
    cout<<"Enter a Wavelength: "<<endl;
    cin>>wavelength;

    // multiway condition statement
    if(wavelength<=379 && wavelength>=10){
        color = "Ultraviolet";
    }
    else if(wavelength<=520 && wavelength>=380)
        color = "Blue";
    else if(wavelength<=590 && wavelength>=521)
        color = "Green";
    else if(wavelength<=740 && wavelength>=591)
        color = "Red";
    else if(wavelength>741)
        color = "Infared";
    else
        color = "Undefined";

    // print result
    cout<<"Wavelength of "<<wavelength<<" emits color "<<color<<endl;

    cout<<"\n ---- Exercise ----"<<endl;

    // declare variables
    float grade = 0;
    char gpa = ' ';
    float final_exam = 0;
    float labs = 0;
    float homework = 0;
    

    // collect data: final_exam, labs, and homework
    cout<<"Enter Final Exam Grade: "<<endl;
    cin>>final_exam;
    cout<<"Enter Labs Grade: "<<endl;
    cin>>labs;
    cout<<"Enter Homework Grade: "<<endl;
    cin>>homework;

    // calculate the grade = final_exam *0.5 + labs*0.3 + homework*0.2
    grade = (final_exam*0.5 + labs*0.3 + homework*0.2);

    // multiway condition
    if(grade<=100 && grade>=90){
        gpa = 'A';
    }
    else if(grade<=89 && grade>=80)
        gpa = 'B';
    else if(grade<=79 && grade>=70)
        gpa = 'C';
    else if(grade<=69 && grade>=60)
        gpa = 'D';
    else if(grade<=59)
        gpa = 'F';
    else
        gpa = ' ';
    // print result
    cout<<"A final grade of "<<grade<<" is equivalent to a GPA of "<<gpa<<endl;

    return 0;
}