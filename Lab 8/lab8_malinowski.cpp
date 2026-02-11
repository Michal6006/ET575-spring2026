/*
Michal Malinowski
Feb 11, 2026
Lab 8 Control Flow Using Switch-Case Statement
*/
#include<iostream>

using namespace std;

int main(){
    cout<<"\n ---- Example 1: Switch-case ----"<<endl;
    // Use switch-case statement to ask the user to select a day off
    // Declare Variables
    int day;
    string day_off = " ";
    // Prompt message
    cout<<"Select a day off:"<<endl;
    cout<<"1 for Monday"<<endl;
    cout<<"2 for Tuesday"<<endl;
    cout<<"3 for Wednesday"<<endl;
    cout<<"4 for Thursday"<<endl;
    cout<<"5 for Friday"<<endl;
    cout<<"Enter a number (1-5): ";
    // Collect the day off
    cin>>day;

    // Switch-case Statement
    switch (day)
    {
    case 1:
        day_off = "Monday";
        break;
    case 2:
        day_off = "Tuesday";
        break;
    case 3:
        day_off = "Wednesday";
        break;
    case 4:
        day_off = "Thursday";
        break;
    case 5:
        day_off = "Friday";
        break;
    default:
        day_off = "invalid";
        break;
    }
    // Prompt Results
    cout<<"Your day off is "<<day_off<<endl;

    cout<<"\n ---- Example 2: Switch-case ----"<<endl;
    // Use switch-case statement to pick a gender
    // Declare Variables
    char gender;
    // Prompt Message
    cout<<"Select a gender: "<<endl;
    cout<<"F for Female"<<endl;
    cout<<"M for Male"<<endl;
    cout<<"O for Other"<<endl;
    cout<<"Enter (F/M/O): ";
    // Collect Gender
    cin>>gender;
    // Switch-case Statement
    switch (gender)
    {
    case 'f':
    case 'F':
        cout<<"Gender = Female"<<endl;
        break;
    case 'm': case 'M':
        cout<<"Gender = Male"<<endl;
        break;
    case 'o': case 'O':
        cout<<"Gender = Other"<<endl;
        break;
    default:
        cout<<"Gender = Undefined"<<endl;
        break;
    }

    cout<<"\n ---- Exercise ----"<<endl;
    // Declare Variables
    int num1;
    int num2;
    char operation;
    // First Num
    cout<<"Enter the First Number: ";
    cin>>num1;
    // 2nd
    cout<<"Enter the Seconed Number: ";
    cin>>num2;
    // Operation
    cout<<"Select an Operation"<<endl;
    cout<<"+ for Addition"<<endl;
    cout<<"- for Subtraction"<<endl;
    cout<<"* for Multiplaction"<<endl;
    cout<<"/ for Division"<<endl;
    cout<<"% for Modulus (Will return the remainder of the division)"<<endl;
    cout<<"Q to Quit the Program"<<endl;
    cout<<"Enter Operation Symbol (+,-,*,/,%,Q): ";
    cin>>operation;
    // Switch-case Statement
    switch (operation)
    {
    case '+':
        cout<<"Result: "<<num1<<" "<<operation<<" "<<num2<<" = "<<(num1 + num2)<<endl;
        break;
    case '-':
        cout<<"Result: "<<num1<<" "<<operation<<" "<<num2<<" = "<<(num1 - num2)<<endl;
        break;
    case '*':
        cout<<"Result: "<<num1<<" "<<operation<<" "<<num2<<" = "<<(num1 * num2)<<endl;
        break;
    case '/':
        cout<<"Result: "<<num1<<" "<<operation<<" "<<num2<<" = "<<(num1 / num2)<<endl;
        break;
    case '%':
        cout<<"Result: "<<num1<<" "<<operation<<" "<<num2<<" Remainder = "<<(num1 % num2)<<endl;
        break;
    case 'q': case 'Q':
        cout<<"Program Quit"<<endl;
        break;
    default:
        cout<<"Error"<<endl;
        break;
    }


    return 0;

}
