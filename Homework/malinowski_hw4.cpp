/* 
Homework 4: Loops
Michal Malinowski
*/ 

#include<iostream>
using namespace std;

int main(){
// Question 1
cout<<"--------- Question 1 ---------"<<endl;
int num;
do
{
    cout<<"Enter a number: ";
    cin>>num;

    if(num < 10){
        cout<<num<<" is invalid! Please enter a number greater than 10."<<endl;
    }

}while(num < 10);

cout<<num<<" is a valid number!"<<endl;

// Question 2
cout<<"--------- Question 2 ---------"<<endl;

int num1, num2;
int min, max;

cout<<"Enter number 1: ";
cin>>num1;

cout<<"Enter number 2: ";
cin>>num2;

if(num1 < num2){
    min = num1;
    max = num2;
}
else{
    min = num2;
    max = num1;
}

cout<<"RESULT = ";

int i = min;

while(i <= max){
    cout << i << " ";
    i++;
}
cout<<endl;

// Question 3
cout << "--------- Question 3 ---------" << endl;
const int dimension = 11;

for(int row = 1; row <= dimension; row++){
    for(int col = 1; col <= dimension; col++){

        if( (col == 3 && row >= 2 && row <= 10) || (row == 2 && col >= 3 && col <= 7) || (col == 7 && row >= 2 && row <= 5) || (row == 5 && col >= 3 && col <= 7) || (row - col == 2 && row >= 6) )   
        {
            cout << "# ";
        }
        else
        {
            cout << "  ";
        }

    }

    cout << endl;
}

return 0;
}