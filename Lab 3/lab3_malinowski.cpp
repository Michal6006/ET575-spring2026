/*
Michal Malinowski
Jan 28, 2026
Lab 3, numerical variables
*/

#include<iostream>

using namespace std;

int main(){
    cout<<"\n----- Example 1: -----"<<endl;
    // declare variables
    int number = 10.0;
    float n = 7.8;

    cout<<"number = "<<number<<endl;
    cout<<"n = "<<n<<endl;
    
    cout<<"\n----- Example 2: numerical operators -----"<<endl;
    // numerical operator, + - * /
    // % returns the remainder of a division
    number = 5;
    int number2 = 2;
    cout<<"sum = "<<number + n<<endl;
    cout<<"without casting, divison = "<< number/number2 <<endl;
    // casting convert from one data type into another data type
    cout<<"divison = "<< number/static_cast<float>(number2) <<endl;

    // % modulus
    cout<<"mod of two numbers = "<< number%number2 <<endl;

    cout<<"\n----- Example 3: assignment operators -----"<<endl;
    // assignment operators assign a value to a variable itself
    // ++ increment by 1
    cout<<"original number = "<<number<<endl;
    number++;
    cout<<"updated number = "<<number<<endl;
    // -- decrement by 1
    cout<<"original number2 = "<<number2<<endl;
    number2--;
    cout<<"updated number2 = "<<number2<<endl;

    // +=
    number = 10;
    cout<<"original number = "<<number<<endl;
    number += 5;
    cout<<"updated number = "<<number<<endl;

    // -=
    number -= 8; // number = number - 8
    cout<<"updated number with -= 8 --> "<<number<<endl;

    cout<<"\n----- Example 4: comaprison operators -----"<<endl;
    // == compare if numbers are equal
    // != compare if numbers are not equal
    // > greater than
    // < less than
    // >= greater than or equal to
    // <= less than or equal to
    // C++ return 1 for True and 0 for false

    number = 3;
    number2 = 8;

    cout<<"are number and number 2 equal? "<< (number == number2)<<endl;

    bool check1 = number != number2;
    bool check2 = number > number2;

    //print results
    cout<<"are number and number2 diffrent? "<<check1<<endl;
    cout<<"is number greater than number2? "<<check2<<endl;

    cout<<"\n----- Example 5: logical operators -----"<<endl;
    // determine the logic between values
    // && AND logic. returns TRUE if all statements are TRUE
    // || OR logic. returns TRUE if at least one of the statements is TRUE
    // ! NOT(invert) logic. returns TRUE form a FALSE or vice versa
    number = 3;
    number2 = 5;

    bool check3 = number < number2; // check3 = true(1)
    bool check4 = number >= number2; // check4 = flase(0)
    bool check5 = number2 != 10; // check5 = true(1) 
    bool check6 = number == 3; // check6 = ture(1)
    
    bool logicalcom = check3 && check5 && check6; // true && true && true = true
    bool logicalcom2 = check4 && check5 && check6; // false && true && true = false
    bool logicalcom3 = check4 || check5 || check6; // false || true || true = true
    bool logicalcom4 = !logicalcom; // !true = false

    //print results
    cout<<"logical comparison 1 = "<<logicalcom<<endl;
    cout<<"logical comparison 2 = "<<logicalcom2<<endl;
    cout<<"logical comparison 3 = "<<logicalcom3<<endl;
    cout<<"logical comparison 4 = "<<logicalcom4<<endl;

    // EXERCISE
    
    return 0;
}