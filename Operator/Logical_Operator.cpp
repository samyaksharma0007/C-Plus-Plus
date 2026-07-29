// Logical Operators
// && - Logical AND
// || - Logical OR
// ! - Logical NOT

#include<iostream>
using namespace std;

int main(){

    bool cond1 = (10>5);
    bool cond2 = (5==5);
    bool cond3 = (7!=7);

    // if(cond1 && cond2 && cond3){ // agar saare conditions true hai tabhi output true aayega
    //     cout << "Condition is true" << endl;
    // }
    // else {
    //     cout << "condition is false" << endl;
    // }

    // if(cond1 || cond2 || cond3){ //agar ek bhi condition true h toh woh true print krega
    //     cout << "Atleast one of the condition is true" << endl;
    // }
    // else {
    //     cout << "Condition is false" << endl;
    // }

    bool condition = false;
    cout << !condition << endl; // condition true hai toh false print krega false hai toh true print krega

    return 0;
}