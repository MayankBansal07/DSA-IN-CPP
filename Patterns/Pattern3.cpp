#include<iostream>
using namespace std;
int main(){
    // to print the number square
    //1 2 3 4 
    //1 2 3 4 
    //1 2 3 4 
    //1 2 3 4
    int m;
    cout<<"Enter the value of m: ";
    cin>>m;
    for( int i=1;i<=m;i++){
        for( int j=1;j<=m;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}