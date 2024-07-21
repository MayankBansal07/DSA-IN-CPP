#include<iostream>
using namespace std;
int main(){
    //finding maximum value out from elements of array
    int arr[] = {1,6,14,5,69,7,2,8};
    int mx = arr[0];
    int n = sizeof(arr)/4;
    for (int i=1;i<=n;i++){
        if(arr[i]>mx){
            mx = arr[i];
        }
    }
    cout<<"Maximum value is: "<<mx;
}