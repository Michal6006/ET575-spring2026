/* 
Homework 3: For Loop
Michal Malinowski
*/ 

#include<iostream>
using namespace std;

int main(){
// Program 1
    int number;
    int positive = 0;
    int negative = 0;
    int zeros = 0;

    for(int i = 1; i <= 10; i++) {
        cout<<"Enter number "<< i <<": ";
        cin>>number;

        if(number > 0) {
            positive++;
        }
        else if(number < 0) {
            negative++;
        }
        else{
            zeros++;
        }
    }

    cout<<"Total positive numbers = "<<positive<<endl;
    cout<<"Total negative numbers = "<<negative<<endl;
    cout <<"Total zeros = "<<zeros<<endl;

// Program 2
    int days;
    double sales;
    double totalSales = 0;
    double averageSales;

    cout<<"Enter number of days: ";
    cin>>days;

    for(int i = 1; i <= days; i++) {
        cout<<"Enter sales for day "<<i<<": $";
        cin>>sales;

        totalSales = totalSales + sales;
    }

    averageSales = totalSales / days;

    cout<<endl;
    cout<<"Total sales $ " <<totalSales;
    cout<< " for " << days;
    cout<< " days. Average daily sales $ ";
    cout<< averageSales << endl;
    return 0;
}
