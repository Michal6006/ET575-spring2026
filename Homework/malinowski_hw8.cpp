/*
Homework 8: 2D Array
Michal Malinowski
*/

#include<iostream>
using namespace std;

// Function to search for a value in a 2D array
void searchValue(int ar[][4],int value,int result[2]){
    bool found=false;

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(ar[i][j]==value){
                result[0]=i;
                result[1]=j;
                found=true;
                return;
            }
        }
    }

    result[0]=-1;
    result[1]=-1;
}

// Function to display message
void displayMessage(int value,int result[2]){
    if(result[0]!=-1&&result[1]!=-1){
        cout<<"Number "<<value<<" was found in row "<<result[0]<<" and column "<<result[1]<<endl;
    }
    else{
        cout<<"Number "<<value<<" was not found"<<endl;
    }
}

const int ROWCOL_ARRAY=4;

int main(){
    int ar[ROWCOL_ARRAY][ROWCOL_ARRAY];
    int value;
    int result[2];

    cout<<"Enter 16 numbers for the 4x4 array:\n";
    for(int i=0;i<ROWCOL_ARRAY;i++){
        for(int j=0;j<ROWCOL_ARRAY;j++){
            cin>>ar[i][j];
        }
    }

    cout<<"Enter value to search: ";
    cin>>value;

    searchValue(ar,value,result);
    displayMessage(value,result);

    return 0;
}