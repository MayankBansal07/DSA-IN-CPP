#include<iostream>
using namespace std;
int main(){
    //using if and else both statements
    int n;
    cout<<"Enter n : ";
    cin>>n;
    if (n%2==0){
        cout<<"Even Number";
    }
    else{
        cout<<"odd Number\n";
        cout<<"Take another number for even";
    }
    return 0;
}