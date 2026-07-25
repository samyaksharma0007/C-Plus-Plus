#include<iostream>
using namespace std;

int main(){
    int budget;
    cout << " Your Budget is:" << endl;

    //input
    cin >> budget;

    //if block
    if(budget>4000000){
        cout << "You can buy Fortuner:" << endl;
    }
    
    //else block
    else{
        cout << "Gareeb" << endl;
    }

    return 0;
}

