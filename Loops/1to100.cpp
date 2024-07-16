#include<iostream>
using namespace std;
int main(){
    //print no. from 1 to 100
    for(int i=1;i<=100;i++){
        cout<<i<<" ";
    }

    //print all even from 1 to 100
    for(int i=1;i<=100;i++){
        if(i%2==0){
            cout<<i<<" ";
        }
    }
}