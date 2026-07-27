#include<iostream>
using namespace std;

int main(){

    //for loop is used to print multiple values at a time
    // for(int i=0; i<=10; i=i+1){
    //     cout << i << endl;
    // }



    //break matlab aap pure loop seh bahar nikal rhe ho!
    // for(int i=0; i<=10; i++){
    //     if(i == 5){
    //         break;
    //     }
    //     cout << "Iteration" << i << endl;
    // }



    //continue matlab value skip kr dena!
    // for(int i=0; i<=10; i++){
    //     if(i == 0){
    //         continue;
    //     }
    //     cout << i << " ";
    // }


    //while loop
    // int i = 2;
    // while(i <= 10){
    //     cout << i << endl;
    //     i = i+1;
    // }

    //do while loop
    // int i = 1;
    // do{
    //     cout << i << " ";
    //     i = i+1 ; // updation
    // }while(i<=5); //condition

    // int count = 10;
    // int i = 1;
    // do{
    //     cout << "Samyak" << endl;
    //     i = i+1;
    // }while(i <= count);

    //Nested Loops
    for(int i=1; i<=3; i=i+1){
        for(int j=1; j<=3; j=j+1){
            cout << i << j << " ";
        }
        cout << endl;
    }





  
    return 0;
}
