#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int rem, mul = 1,ans = 0;
    while(n>0){
        rem = n%2;
        n/=2;
        ans+=rem*mul;
        mul*=10;
    }
    cout<<ans;
}