#include<iostream>
using namespace std;
int main(){
    // to print the pattern of solid square
    int m;
    cout<<"Enter the value of m: ";
    cin>>m;
    for( int i=1;i<=m;i++){
        for( int j=1;j<=m;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}