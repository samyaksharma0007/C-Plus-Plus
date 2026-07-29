#include<iostream>
using namespace std;

int main(){

    int a = 5;
    cout << a << endl;

    cout << (++a) << endl;// (pre-increment) - pehle increase fir value store krega

    cout << (a++) << endl;// (post-increment)- pehle value store krega fir store krega
    cout << a << endl;

    cout << (--a) << endl;//(pre-decrement)- pehle decrease krega fir value store krega
    cout << (a--) << endl;//(post-decrement) - pehle value store krega fir decrease krega
    cout << a << endl;



    return 0;
}