#include<iostream>
using namespace std;
int main(){
    //to print the pattern of solid rectangle star
    int m,n;
    cout<<"Enter the value of m: ";
    cin>>m;
    cout<<"Enter the value of n: ";
    cin>>n;
    for (int i=1;i<=m;i++){
        for( int j=1;j<=n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}