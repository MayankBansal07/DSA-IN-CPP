#include<iostream>
using namespace std;
int main(){
    //wap to count digits 
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int count = 0;
    while(n>0){
        n = n/10;
        count++;
    }
    cout<<"Number of digits: "<<count;
}