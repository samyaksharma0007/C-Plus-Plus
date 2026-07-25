#include<iostream>
using namespace std;

int main(){
    int marks=65;
    cout << "Enter your marks:" << endl;

    if(marks>90){
        cout << "A";
    }
    else if(marks>80){
        cout << "B";
    }
    else if(marks>70){
        cout << "C";
    }
    else{
        cout << "You Failed";
    }

    return 0;
}