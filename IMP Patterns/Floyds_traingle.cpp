#include<iostream>
using namespace std;
int main(){
    // Floyd's Triangle
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
    int m;
    cout<<"Enter the value of m: ";
    cin>>m;
    int a = 1;
    for( int i=1;i<=m;i++){
        for( int j=1;j<=i;j++){
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
}