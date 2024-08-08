#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of matrix: ";
    cin>>n;
    int arr[n][n];
    cout<<"Enter the elements of matrix: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    for(int j=0;j<n;j++){
        int start = 0, end = n-1;
        while(start<=end){
            swap(arr[start][j],arr[end][j]);
            start++,end--;
        }
    }

    for(int i=0;i<n;i++){
        int start = 0, end = n-1;
        while(start<=end){
            swap(arr[i][start],arr[i][end]);
            start++,end--;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}




