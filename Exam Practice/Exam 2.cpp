#include<iostream>
using namespace std;
// 1
char mystery(int first, int second){
    if (first >= second){		
        return 'W';		
    }
    else{ 
        return 'H';
    }
}

// 2
int sum=0, count=0;
void testing(){
    for (int n = -10; n< 10; n+=3){
        if (n%4 ==0){
            count++;
            continue;
        }
        sum += n;
    }
}

// 3
int series(int m)
{
    if (m >= 10)
        return m;

    else
        return series(m + 2) - 6;
}

int main(){
// 1
    char m = mystery(-3, 1);
    cout<<"mystery returns = "<<m<<endl;

// 2
    cout<<"The sum is: "<<sum<<endl<<"The count is: "<<count<<endl;
    testing();
    cout<<"The sum is: "<<sum<<endl<<"The count is: "<<count<<endl;

// 3
    int sequencenumber = 3;
    cout << "The series sequence of " << sequencenumber << " is " << series(sequencenumber) << endl;

    return 0;
}

