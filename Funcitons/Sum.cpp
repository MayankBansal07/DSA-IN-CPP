#include<iostream>
using namespace std;
// Sum using functions
void sum(int a,int b){
    cout<<a+b<<endl;
}
int main(){
    int a,b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    sum(a,b);
}

// function sum using return call and printing function value
int sum(int a,int b){
    return a+b;
}
int main(){
    int a,b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<sum(a,b);
}