/*
Homework 5: strings, string methods, and numerical variables
Michal Malinowski
*/
#include<iostream>
#include<cmath>
using namespace std;

// Program 1
int speed(){
    int n;
    cout<<"Enter the speed of the wind: ";
    cin>>n;
    if(n>0 && n<100){
        return n;  
    }
    else{
        cout<<"Error! Value must be positive and less than 100!"<<endl;
        return speed();
    }
}

float temp(){
    int n;
    cout<<"Enter a temperature: ";
    cin>>n;
    if(n>-90 && n<=10){
        return n;  
    }
    else{
        cout<<"Error! Value must be less than or equal to 10 and greater than -90!"<<endl;
        return temp();
    }
}

float windspeed(int v, float tem){
    return 33-(10*sqrt(v)-v+10.5)*(33-tem);
}
void prompt_result(float n){
    cout<<"The wind index is: "<<n<<endl;
}

// Program 2
int collectNumber(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    return n;
}

bool inOrder(int a,int b, int c){
    return (a>=b && b>=c);
}

void order_result(int a, int b, int c,bool d){
    char choice;
    if(d == 1){
    cout<<"\nThe entered numbers are in descending order."<<endl;
    }
    else{
    cout<<"\nThe entered numbers are not in descending order."<<endl;
    }
    cout<<"Would you like to run the program again? (y/n): "<<endl;
    cin>>choice;
    if(choice == 'y' || choice == 'Y'){
        a = collectNumber();
        b = collectNumber();
        c = collectNumber();

        d = inOrder(a, b, c);
        order_result(a,b,c,d);
    }
    }

int main(){
    // Program 1
    cout<<"----- Program 1 -----"<<endl;
    int s = speed();
    float t = temp();
    prompt_result(windspeed(s,t));

    // Program 2
    cout<<"\n----- Program 2 -----"<<endl;
    int num1 = collectNumber();
    int num2 = collectNumber();
    int num3 = collectNumber();
    bool desc_order = inOrder(num1,num2,num3);
    order_result(num1,num2,num3,desc_order); 

    return 0;
}