/*
Michal Malinowski
April 27, 2026
Lab 20, Parsing and File Handling
*/
#include<iostream>
using namespace std;
#include"lab20_function_malinowski.cpp"

int main(){
    cout<<"\n----- Example 1: Collect a Number -----"<<endl;
    int n = collectnum();
    cout<<"Collected number = "<<n<<endl;

    cout<<"\n----- Example 2: Reading File -----"<<endl;
    readfile();

    cout<<"\n----- Example 3: Writing a File -----"<<endl;
    writefile("intro.txt");

    cout<<"\n----- Example 4: Append Data -----"<<endl;
    appendmsg("samplefile.txt","Michal Malinowski");

    cout<<"\n----- Example 5: Check is a File Exists -----"<<endl;
    checkfile("samplefile.txt");

    cout<<"\n----- Exercise -----"<<endl;
    file_creation("data_user.txt");
    append_file("data_user.txt", "Exercise Lab 20");
    read_file("data_user.txt");
    return 0;
}