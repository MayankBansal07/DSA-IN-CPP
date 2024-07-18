#include<iostream>
using namespace std;
int main(){
    // important 
    //     *
    //   * * 
    // * * * 
    int m;
    cout<<"Enter the value of m: ";
    cin>>m;
    for( int i=1;i<=m;i++){ // rows
        for( int j=1;j<=m-i+1;j++){ // spaces
            cout<<"  ";
        }
        for( int j=1;j<=i;j++){ // stars
            cout<<"* ";
        }
        cout<<endl;
    }
}