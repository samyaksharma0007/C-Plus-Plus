#include<iostream>
using namespace std;

int main(){
    int height;
    cout << "Your height is:" << endl;
    //input taken
    cin >> height;

    int weight;
    cout << "Your weight is:" << endl;
    //input taken
    cin >> weight;

    if(height>5){
        if(weight>75){
            cout << "You got a good BMI:" << endl;
        }
        else{
            cout << "Tumse nah Ho payega:" << endl;
        }
    }
    else{
        cout << "Too Short" << endl;
    }

    return 0;
}