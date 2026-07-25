#include<iostream>
using namespace std;

int main(){
    int marks1, marks2;
    cout << "My marks is:" << endl;
    cin >> marks1 >> marks2;

    //Ternary Operator evaluates
    int max_val = (marks1 > marks2) ? marks1 : marks2;
    cout << "Better marks is:" << max_val << endl;



    return 0;
}