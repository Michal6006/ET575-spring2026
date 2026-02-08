/*

Homework 1: strings, string methods, and numerical variables

Michal Malinowski

*/

// Activity 1

#include<iostream>
using namespace std;

int main(){
    // 1
    string a = "Welcome to ";
    string b = "New York City";

    // 2
    string c;
    cout<<"Enter your name: ";
    cin>> c;

    // 3
    string d = a+b+" "+c;

    // 4
    cout<<"\n"+d<<endl;

    // 5
    int d_length = d.length();

    // 6
    int d_index_ma = d.find("ma");

    // 7
    string d2 = a+b+" "+c;
    if (d_index_ma >= 0){
        d2.replace(d_index_ma,2,"%--%");
    } else{
        d2 = "'ma' was not in the string";
    }
    
    
    // 8
    cout<<"\n------------------------------ RESULT ACTIVITY 1 ----------------------------"<<endl;
    cout<<"\n\tConcatenated Message: "<<d<<endl;
    cout<<"\tMessage Length: "<<d_length<<endl;
    cout<<"\tIndex Of Character 'ma': "<<d_index_ma<<endl;
    cout<<"\tReplace 'ma' with '%---%': "<<d2<<endl;


    // Activity 2

    // 1
    const double pi = 3.14159;

    // 2
    float r, h;
    cout<<"\nEnter the radius: ";
    cin>> r;

    cout<<"Enter the height: ";
    cin>> h;

    // 3
    bool check1 = (r > h);

    // 4
    bool check2 = (r == h);

    //5
    h *= 3;
    r += 5;

    // 6 
    bool check3 = (r != h && r > h);

    // 7
    float vol = pi*r*r*h;

    // 8
    cout<<"\n------------------------------ RESULT ACTIVITY 2 ----------------------------"<<endl;
    cout<<"\tStep 3) Is the radius greater than height? "<<check1<<endl;
    cout<<"\tStep 4) Is the radius equal to height? "<<check2<<endl;
    cout<<"\tStep 5) Triple height = "<<h<<endl;
    cout<<"\tStep 5) Increased radius by 5 =  "<<r<<endl;
    cout<<"\tStep 6) Is the radius not equal to and greater than height ? "<<check3<<endl;
    cout<<"\tStep 7) The volume of a right cylinder with radius "<<r<<" and height "<<h<<" cm is = "<<vol<<" cm^3"<<endl;

    return 0;
}
