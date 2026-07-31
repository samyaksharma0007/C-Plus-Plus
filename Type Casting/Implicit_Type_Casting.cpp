#include<iostream>
using namespace std;

int main(){
    //Implicit Casting
    // Int to Float
    int a = 10;
    float b = 5.5;

    float result = (a+b);// implicit conversion converts a(int) into float
    cout << result << endl;

    return 0;
}