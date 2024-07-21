#include<iostream>
using namespace std;
int main(){
    //find the second largest element of an array
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/4;
    int mx = INT8_MIN;
    int smx = INT8_MIN;
    for (int i=0;i<=n;i++){
        mx = max(mx,arr[i]);
    }
    for (int i=0;i<=n;i++){
        if(arr[i]!=mx){
            smx = max(smx,arr[i]);
        }
    }
    cout<<"Second largest element is: "<<smx;
}