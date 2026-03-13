/*
Michal Malinowski
Mar 11, 2026
Lab 12 Nested Loop
*/
#include<iostream>

using namespace std;

int main(){
    cout<<"\n ---- Example 1: Break Algorithm of a Loop ----"<<endl;
    int count = 0;
    int i = 10;

    while(i>5){
        i--;
        if(i%2==0){
            count += i;
            continue;
        }
        count -= 3;
    }

    cout<<"Final count is "<<count<<endl;

    /* TABLE ANALYSIS
    Loop
    iteration   |   i--       |   if(i%2==0)    |   count
    ----------------------------------------------------------------------------------
        1       | i = 10-1= 9 |     false       | count -= 3 --> count = 0 - 3 = -3
    ----------------------------------------------------------------------------------
        2       | i = 9-1= 8  |     true        | count += i --> count = -3 + 8 = 5
    ----------------------------------------------------------------------------------
        3       | i = 8-1= 7  |     false       | count -= 3 --> count = 5 - 3 = 2
    ----------------------------------------------------------------------------------
        4       | i = 7-1= 6  |     true        | count += i --> count = 2 + 6 = 8
    ----------------------------------------------------------------------------------
        5       | i = 6-1= 5  |     false       | count -= 3 --> count = 8 - 3 = 5
    ----------------------------------------------------------------------------------
        6       |   (STOP)    | 


    cout --> Final count is 5

    */

    cout<<"\n ---- Example 2: Nested Loop ----"<<endl;
    // a loop inside another loop
    // one iteration of the outer loop, one complete cycle of the inner loop will run
    int outer = 0;
    // outer loop
    while(outer ++ < 3){
        cout<<"OUTER LOOP "<<outer<<endl;

        //inner loop
        int inner = 0;
        while(inner++ <= 5){
            cout<<inner<<"\t";
        }
        cout<<endl;
    }

    cout<<"\n ---- Example 3: Nested Loop ----"<<endl;
    // simulate a cinema seat arrangment
    // seats per row. row = outer loop, seats = inner loop

    int rows, seats_row;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    cout<<"Enter the number of seats per row: ";
    cin>>seats_row;

    cout<<"Seating Arrangment: "<<endl;
    for(int r=1; r<=rows ; r++){
        for(int s=1; s<=seats_row; s++){
            cout<<"Row "<<r<<" seat = "<<s<<"\t";
        }
        cout<<endl;
    }

    cout<<"\n ---- Example 4: 2D Graph ----"<<endl;
    // 9-by-9 graph
    const int GRIDSIZE = 9;
    for(int row = 1; row<=GRIDSIZE; row++){
        for(int col = 1; col<=GRIDSIZE; col++){
            if(col ==5 || row == 5)
                cout<<" x ";
            else
                cout<<" . ";
        }
        cout<<endl;
    }

    cout<<"\n ---- Example 5: 2D Graph ----"<<endl;
    // 10-by-10 graph. plot letter H
    const int GRID = 10;
    for(int row = 1; row<=GRID ; row++){
        for(int col = 1; col <= GRID ; col++){
            if((col>=3 && col<=4 && row>=2 && row<=9) || (row>=5 && row<=6 && col>=5 && col<=6) || (col>=7 && col<=8 && row>=2 && row<=9))
                cout<<" % ";
            else
                cout<<" . ";
        }
        cout<<endl;
    }

    cout<<"\n ---- Exercise a ----"<<endl;
    int sum=0; 
    count=0;
    for (int n = 20; n> 0; n-=2){
        if (n%3 ==0){
            count++;
            continue;
        }
        sum += n;
    }
    cout<<"The sum is: "<<sum<<endl<<"The count is: "<<count<<endl;

    cout<<"\n ---- Exercise b ----"<<endl;
    i=0;
    int add=0;
    while(i<=10){
        i++;
        if(i<5 && i !=2){   
            cout<<"i = "<<i<<endl;
            }
        else{continue;}
        add +=i;
    }
    cout<<"Add = "<<add<<endl;
    return 0;
}