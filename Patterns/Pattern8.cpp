#include<iostream>
using namespace std;
int main(){
    // 1
    // 1 2
    // 1 2 3
    int m;
    cout<<"Enter the value of m: ";
    cin>>m;
    for( int i=1;i<=m;i++){
        for( int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}