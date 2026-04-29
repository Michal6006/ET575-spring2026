/*
Michal Malinowski
April 27, 2026
Lab 20, Parsing and File Handling
*/
#include<iostream>
using namespace std;

// Example 1: Using cin to validate a data type
// If the input is a proper data type, cin will set a state to 'goodbit'
// If the input is not a proper data type, cin will set a state to 'failbit'

// Function to collect and return an integer
int collectnum(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(cin.fail()){
        // Clear the failbit
        cout<<"Wrong data type! "<<endl;
        cin.clear();
        cin.ignore(10000,'\n');
        // Recolect the number
        return collectnum();
    }
    else{
        return n;
    }

}

// Example 2: Read File
// input file = ifstream
// output file = ofstream
// fstream has ifstream and ofstream
// after the library, we can declare an ifstream and ofstream
#include<fstream>
void readfile(){
    // Decalre an object ot handle ifstream
    ifstream fin;
    // Declare a variable to hold each line of the read file
    string line;
    // Declare a variable as a line counter
    int linecounter = 1; // First line
    // Open the File
    fin.open("samplefile.txt");
    // Use a loop to go through each line in the opened file
    while(getline(fin, line)){
        cout<<"Sentence = "<<linecounter<<" = "<<line<<endl;
        linecounter ++;
    }

    // close the file input when finished reading
    fin.close();
}

// Example 3: Write Files
// Function to Write or create a new file
void writefile(string filename){
    // Declare an object to handle output files, fout
    ofstream fout;
    // Open the file
    // If the File exists it will overwrite
    // If the file doesn't exist, it will create a new file
    fout.open(filename);
    // Write "Student's full name" in the first line of file
    fout<<"Lab 20, file streaming \n";
    fout<<"April 27, 2026 \n";
    // Close the file ouput when finisehd writing
    fout.close();
}

// Example 4: Append data into an existing file
void appendmsg(string filename, string msg){
    ofstream fout;
    fout.open(filename, ios::app);
    // Append the following data
    for(int n = 3; n>=0 ; n--){
        fout<<n<<endl;
    }
    fout<<"GAME OVER\n"<<msg<<endl;

    fout.close();
}

// Example 5: Check is a file exists
void checkfile(string filename){
    ifstream fin;
    fin.open(filename);

    // If the filename dosen't exist in the root directory, exit the function
    if(fin.fail()){
        cout<<"File "<<filename<<" doesn't exist!"<<endl;
        exit(1);
    }

    // If the filename exists, then read all the lines in the file
    string eachline;
    while(getline(fin, eachline)){

        cout<<"Line 1 = "<<eachline<<endl;
        
    }

    // Close the file
    fin.close();
}

// Exercise
void file_creation(string filename){
    ofstream fout;
    fout.open(filename);
    fout<<"This is my output file - Michal Malinowski. \n";
    fout.close();
}

void append_file(string filename, string msg){
    ofstream fout;
    fout.open(filename, ios::app);
    fout<<msg<<endl;
    fout.close();
}

void read_file(string filename){
    ofstream fout;
    ifstream file(filename);
    string line;
    while(getline(file, line)){
        cout<<line<<endl;
    }
    fout.close();
}
