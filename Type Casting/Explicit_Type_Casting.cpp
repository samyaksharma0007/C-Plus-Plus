#include<iostream>
using namespace std;

int main(){

    //Explicit Type Casting
    //You can manually change the data type on your own
    // int a = 10;
    // int b = 3.33;
    // float c = (a/(float(b))); // int/float=float
    // cout << c << endl;

    // int a = 10;
    // int b = 3.33;
    // float c = (a/(int(b))); // int/int=int
    // cout << c << endl;

    int a = 10;
    int b = 3.33;
    int c = ((float(a)/b)); // float/int=float but we are storing the value in int so it will give int type answer i.e; 3
    cout << c << endl;

    return 0;

}