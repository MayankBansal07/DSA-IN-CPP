#include<iostream>
using namespace std;
int main(){
    // 1 
    // 1 3 
    // 1 3 5 
    int m;
    cout<<"Enter the value of m: ";
    cin>>m;
    for( int i=1;i<=m;i++){
        for( int j=1;j<=i;j++){
            cout<<2*j-1<<" ";
        }
        cout<<endl;
    }

    int m;
    cout<<"Enter the value of m: ";
    cin>>m;
    for( int i=1;i<=m;i++){
        int a = 1;
        for( int j=1;j<=i;j++){
            cout<<a<<" ";
            a += 2;
        }
        cout<<endl;
    }
}