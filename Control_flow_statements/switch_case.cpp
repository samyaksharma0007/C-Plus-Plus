#include<iostream>
using namespace std;

int main(){
    char grade;
    cout << "Your grade is:" << endl;
    cin >> grade;
    
    switch(grade){
        case 'A' : cout << "your marks will be between 90 to 100" << endl;
        break;
        case 'B' : cout <<  "your marks will be between 80 to 90" << endl;
        break;
        case 'C' : cout <<  "your marks will be between 70 to 80" << endl;
        break;
        default : cout <<  "your marks will be between 60 to 70" << endl;
        break;
    }

    return 0;
}