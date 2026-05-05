/*
Homework 10: File Streaming
Michal Malinowski
*/
#include<iostream>
using namespace std;
#include<fstream>

void readfile(string file_name){
    ifstream fin;
    string line;
    int linecounter = 1;
    fin.open(file_name);
    while(getline(fin, line)){
        cout<<"Line = "<<linecounter<<" = "<<line<<endl;
        linecounter ++;
    }
    fin.close();
}

void wordCount(string file_1, string file_2){
    ifstream fin;
    ofstream fout;
    fin.open(file_1);
    fout.open(file_2);
    string word;
    int count = 0;
    while(fin >> word){
        count++;
    }
    fout<<"Michal Malinowski \n";
    fout<<"Total number of words: "<<count<<"\n";
}

void countEarth(string file_1, string file_2){
    ifstream fin;
    ofstream fout;
    fin.open(file_1);
    string word;
    int count = 0;
    while(fin >> word){
        if(word == "Earth"){
            count++;
        }
    }
    fin.close();
    fout.open(file_2, ios::app);
    fout<<"The word 'Earth' appears "<<count<<" times in the document.\n";
    fout.close();
}

int main(){
    cout<<"----- 1 -----"<<endl;
    readfile("Remembering_Earth.txt");

    cout<<"----- 2 -----"<<endl;
    wordCount("Remembering_Earth.txt", "wordcounts.txt");

    cout<<"----- 3 -----"<<endl;
    countEarth("Remembering_Earth.txt", "wordcounts.txt");

    return 0;
}