#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int t=(n/2)+1;
    for( int i=1;i<=t;i++){
        for( int j=1;j<=i;j++){
            cout<<"* ";
        }
        for( int j=1;j<=(2*t)-(2*i);j++){
            cout<<"  ";
        }
        for( int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

}