/*
Michal Malinowski
Mar 2, 2026
Lab 9 Loop Mechanics
*/
#include<iostream>

using namespace std;

int main(){
    cout<<"\n ---- Example 1: For Loop Basics ----"<<endl;

    for(int action = 0; action<5; action++ ){
        cout<<"Hello "<<action<<endl;
    }

    /* loop analysis table
    loop iteration  |   action  |   action<5    |   cout<<"Hello "<<action  |   action++
    ------------------------------------------------------------------------------------------------------
    |   1           |      0    |       true    |       Hello 0             |   action = 0 + 1 = 1
    |   2           |      1    |       true    |       Hello 1             |   action = 1 + 1 = 2
    |   3           |      2    |       true    |       Hello 2             |   action = 2 + 1 = 3
    |   4           |      3    |       true    |       Hello 3             |   action = 3 + 1 = 4
    |   5           |      4    |       true    |       Hello 4             |   action = 4 + 1 = 5
    |   6           |      5    |       false   (stop the loop)
    */
    
    cout<<"\n ---- Example 2: For Loop as an Increment Counter ----"<<endl;
    // counter from 1 to 10 (inclusive) with step of 1 -->1,2,3,4,5,6,7,8,9,10
    int x = 1;
    for(x; x<=10; x++){
        cout<<x<<"\t";
    }
    cout<<endl;

    cout<<"\n ---- Example 3: For Loop as an Decrement Counter ----"<<endl;
    // counter from 2 to -5 (inclusive) with step of 1 --> 2,1,0,-1,-2,-3,-4,-5
    for(int n = 2; n>=-5; n--){
        cout<<n<<"\t";
    }
    cout<<endl;

    cout<<"\n ---- Example 4: For Loop as an Increment Counter with Different Steps ----"<<endl;
    // counter from 1 to 20 (exclusive) with step of 3 --> 1,4,7,10,13,16,19
    for(int m = 1; m<20; m+=3){
        cout<<m<<"\t";
    }
    cout<<endl;

    cout<<"\n ---- Example 5: Nested Conditional Statement within the Loop ----"<<endl;
    // counter from -10 to 10, step of 3, count how many numbers are a multiple of 5 within the counter
    int counter_5 = 0;
    for(int x = -10; x<=10; x+=3){
        cout<<x<<"\t";
        if(x%5 == 0 && x!= 0){
            counter_5 ++;
        }
    }
    cout<<endl;
    cout<<"The Counter has "<<counter_5<<" multiple/s of 5."<<endl;

    cout<<"\n ---- Exercise 1 ----"<<endl;
    // counter from 21 to -21 (inclusive) with step of 5 --> 21,16,11,6,1,-4,-9,-14,-19
    int counter_2 = 0;
    for(int a = 21; a>=-21; a+=-5){
        cout<<a<<"\t";
        if(a%2 == 0 && a!= 0){
            counter_2 ++;
        }
    }
    cout<<endl;
    cout<<"The Counter has "<<counter_2<<" multiple/s of 2."<<endl;

    cout<<"\n ---- Exercise 2 ----"<<endl;
    // counter from ? to 30 (inclusive) with step of 4
    int uservalue;
    cout<<"Enter an initial value: ";
    cin>>uservalue;
    for(uservalue; uservalue<=30; uservalue+=4){
        cout<<uservalue<<"\t";
    }
    cout<<endl;
    
    return 0;
}
