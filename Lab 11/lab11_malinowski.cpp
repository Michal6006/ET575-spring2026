/*
Michal Malinowski
Mar 3, 2026
Lab 11 While Loop
*/

#include<iostream>

using namespace std;

int main(){
    cout<<"\n ---- Example 1: While Loop as a Counter ----"<<endl;
    // while loop to print from 1 to 5, with step of 1 -->1,2,3,4,5
    // Step 1) initial value for the loop
    int i = 1;
    // Step 2) loop  condition i<=5
    while(i<=5){
        cout<<i<<"\t";
        // Step 3) update loop value
        i++;
    }

    cout<<"\n ---- Example 2: While Loop as a Decrement Counter ----"<<endl;
    // Print from 3 to 0, with step of -1 -->3,2,1,0
    int m = 3;
    while(m>=0){
        cout<<m<<"\t";
        m--;
    }

    cout<<"\n ---- Example 3: While Loop as a Decrement Counter ----"<<endl;
    // Print for 2 to -1, step of -1
    m = 3;
    while(m-- >=0){
        cout<<m<<"\t";
    }

    cout<<"\n ---- Example 4: While Loop as a Decrement Counter ----"<<endl;
    // Print for 3 to 0, step of -1
    m = 3;
    while(--m >=0){
        cout<<m<<"\t";
    }

    cout<<"\n ---- Example 5: While Loop to Validate an input ----"<<endl;
    // While loop to validate if a number is not between 10 and 20
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    // While loop to recollect the number again
    while(!(n>=10 && n<=20)){
        cout<<"Enter a number between 10 and 20: ";
        cin>>n;
    }

    // Print Result
    cout<<"Entered number = "<<n<<endl;

    cout<<"\n ---- Example 6: do-while Loop to Validate an input ----"<<endl;
    // check if a number is even or odd
    // use loop to check if the user wants to check another number
    char choice = 'y';
    do {
        cout<<"Enter a number: ";
        cin>>n;
        if (n%2==0){
            cout<<n<<" is EVEN!"<<endl;
        }
        else{
            cout<<n<<" is ODD!"<<endl;
        }
        cout<<"Do you want another run? ";
        cin>>choice;
    }while(choice == 'y' || choice == 'Y');
    
    cout<<"\n ---- Example 7: do-while Loop to Validate an input ----"<<endl;
    int number;
    do{
        cout<<"Enter a positive number: ";
        cin>>number;
    }while(number<=0);

    cout<<"\n ---- Example 8: Break Statement ----"<<endl;
    // Run a program to collect and add four consecutve negative numbers. The program will stop is a positive number of zero is entered
    int loopcounter = 1;
    int sumnegative = 0;
    int num;

    do{
        cout<<"Enter a negative number: ";
        cin>>num;
        if(num<0){
            sumnegative += num;
            loopcounter ++;
        }
        else{
            cout<<"A non-negative number was entered! Loop will be terminated!";
            break;
        }
    }while(loopcounter<=4);

    // Print Result
    cout<<"The total sum is = "<<sumnegative<<endl;

    cout<<"\n ---- Example 9: Break Statement ----"<<endl;
    // Withdraw from an account. Original balance $1000
    // If the amount is greater than th ebalance or negative, the program will recollect another amount
    int balance = 1000;
    int w = 0;

    while(true){
        cout<<"How much do you want to withdraw? ";
        cin>>w;
        if(w<0 || w>balance){
            cout<<"Can't withdraw $"<<w<<". Enter another amount or press 0 to exit ";
            cin>>w;
            if(w == 0){
                break;
            }
        }
        else{
            balance -= w;
            break;
        }
    }

    // Print Results
    cout<<"The balance is $"<<balance<<endl;

    cout<<"\n ---- Exercise ----"<<endl;
    num = 0;
    int input = 0;
    cout<<"Enter a Number: ";
    cin>>num;
    do{
        cout<<"Enter a number to be added to the entered (or 0 to stop loop): ";
        cin>>input;
        num += input;
    }while(input != 0);
    cout<<"The total sum is: "<<num<<endl;

    return 0;
}