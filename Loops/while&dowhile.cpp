#include<iostream>
using namespace std;
int main(){
    //while loop - use when we don't know how many times to run the loop
    int i = 1;
    while(i<=10){
        cout<<i<<" ";
        i++;
    }

    //do while loop - minimum runs 1 time
    int i = 11;
    do{
        cout<<i<<" ";
        i++;
    }while(i<=10);
}