#include<iostream>
using namespace std;
int main(){
    //write content of 1 array to another array in reverse order
    int arr[] = {6,5,4,3,2,1};
    int n = sizeof(arr)/4;
    int b[n];
    for (int i=0;i<=n;i++){
        int j = n-1-i;
        b[i] = arr[j];
    }
    for (int i=0;i<=n-1;i++){
        cout<<b[i]<<" ";
    }
}