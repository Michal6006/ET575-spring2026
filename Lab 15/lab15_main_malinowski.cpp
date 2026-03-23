/*
Michal Malinowski
March 18, 2026
Lab 15, Random Numbers
*/
#include<iostream>

using namespace std;

#include "lab15_function_malinowski.cpp"

int main(){
    srand(time(nullptr));
    cout<<"\n----- Example 1: Random Number -----"<<endl;
    cout<<randomnumber()<<endl;

    cout<<"\n----- Example 2: Random Number Between 0 and 9 -----"<<endl;
    cout<<random_0_9()<<endl;

    cout<<"\n----- Example 3: Random Number Between 5 and 12 -----"<<endl;
    cout<<random_5_12()<<endl;

    cout<<"\n----- Example 4: Random Number Between 5 and 12 -----"<<endl;
    int roll1 = rolldice();
    int roll2 = rolldice();
    bool resultmatch = matchdices(roll1,roll2);
    printdices(roll1, roll2, resultmatch);

    cout<<"\n----- Exercise  -----"<<endl;
    int dice_1 = dice();
    int dice_2 = dice();
    bool check = snake_check(dice_1,dice_2);
    results(dice_1, dice_2, check);

    return 0;
}