#include<iostream>
using namespace std;
int main(){
    // to print number square different sequence
    // 1 1 1 1 
    // 2 2 2 2 
    // 3 3 3 3 
    // 4 4 4 4 
    int m;
    cout<<"Enter the value of m: ";
    cin>>m;
    for( int i=1;i<=m;i++){
        for( int j=1;j<=m;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}