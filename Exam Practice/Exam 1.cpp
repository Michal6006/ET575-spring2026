#include<iostream>

using namespace std;

// main function is the executable part of your c++ file
int main(){
	float grade = 0;
    string gpa = " ";
    float final = 0;
   	float lab = 0;
    float midterm = 0;
    
  	cout<<"Enter Final Exam Grade: ";
    cin>>final;
    cout<<"Enter Labs Grade: ";
    cin>>lab;
    cout<<"Enter Midterm Grade: ";
    cin>>midterm;

    	grade = (midterm *0.25 + final*0.4 + lab*0.35);

    	if(grade<=100 && grade>=90){
        	gpa = "A";
    	}
   	else if(grade<=89 && grade>=80)
        	gpa = "B";
    	else if(grade<=79 && grade>=70)
        	gpa = "C";
    	else if(grade<=69 && grade>=60)
        	gpa = "D";
    	else if(grade<=59)
        	gpa = "Fail";
   	else
        	gpa = " ";
   
   	cout<<"\t ------------ RESULT ------------ "<<endl;
	cout<<"\t Final Grade: "<<grade<<", GPA = "<<gpa<<endl;
	cout<<"\t -------------------------------------- "<<endl;




    return 0;
}