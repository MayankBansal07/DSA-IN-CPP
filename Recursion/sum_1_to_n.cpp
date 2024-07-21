#include<iostream>
using namespace std;
//print sum from 1 to n (return type)
int sum(int n){
    if (n==0) return 0; // //Base case
    return n+sum(n-1); // //call
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<sum(n)<<endl;
}