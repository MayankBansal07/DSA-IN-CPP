#include<iostream>
using namespace std;
//factorial using recursion
int fact(int n){
    if (n==0) return 1; // //Base case
    return n*fact(n-1); // //call
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<fact(n)<<endl;
}