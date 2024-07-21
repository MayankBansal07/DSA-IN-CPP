#include<iostream>
using namespace std;
int main(){
    // taking input from array using for loop
    int arr[5];
    cout<<"Enter array Elements: ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"Array Elements: ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}