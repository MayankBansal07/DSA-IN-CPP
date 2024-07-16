#include<iostream>
using namespace std;
int main(){
    //display this ap 1,3,5,7 upto n terms
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<2*i-1<<" ";
    }

    //display gp 1,2,4,8
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<2*i<<" ";
    }
}