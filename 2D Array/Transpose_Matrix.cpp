#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the value of row and column of matrix: ";
    cin>>n>>m;
    int arr[10][10];
    cout<<"Enter the values of Matix: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
}


