/*
Michal Malinowski
March 23, 2026
Lab 15, Random Numbers
*/
#include<iostream>
#include<cstdlib>
#include<time.h>

using namespace std;

// Example 1: rand() and srand() functions
int randomnumber(){
    srand(time(0));
    return rand();
}

// Example 2: Range of random numbers
// Generate numbers between 0 and 9 (inclusive)
int random_0_9(){
    srand(time(nullptr));
    return rand()%10;
}

// Example 3: Generate a number between 5 and 12
int random_5_12(){
    srand(time(0));
    return 5 + rand()%8;
}

// Example 4: Match a number of a pair of dices
// Function Randomly generates number between 1 and 6
int rolldice(){
    return 1+rand()%6;
}
// Function to chekc if two numbers are the same
bool matchdices(int roll1, int roll2){
    return roll1 == roll2;
}
// Function to print result
void printdices(int roll1, int roll2, bool result){
    cout<<"Is "<<roll1<<" the same as "<<roll2<<"? "<<result<<endl;
}

// Exercise
// Function 1
int dice(){
    return 1 + rand()%6;
}

// Function 2
bool snake_check(int a,int b){
    if(a == 1 && b == 1){
        return true;
    }
    else{
        return false;
    }
}

// Function 3
void results(bool a){
    if(a == 1){
        cout<<"Congrats! You got a snake eyes."<<endl;
    }
    else{
        cout<<"Better luck next time!"<<endl;
    }
}