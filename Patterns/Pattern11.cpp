#include<iostream>
using namespace std;
int main(){
    // 3
    // 3 2 
    // 3 2 1
    int m,cp_m;
    cout<<"Enter the value of m: ";
    cin>>m;
    cp_m = m;
    for( int i=1;i<=m;i++){
        for( int j=1;j<=i;j++){
            cout<<m<<" ";
            m--;
        }
        cout<<endl;
        m = cp_m;
    }
}