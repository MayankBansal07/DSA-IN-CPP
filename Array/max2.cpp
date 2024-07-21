#include<iostream>
using namespace std;
int main(){
    //INT_MIN is not working but INT_MIN is the smallest no. and all other no. will be bigger than it
    int arr[] = {-10,-5,-8,-2,-45,-6};
    int n = sizeof(arr)/4;
    int mx = INT_MIN;
    for (int i=1;i<=n;i++){
        if(arr[i]>mx){
            mx = max(mx,arr[i]);
        }
    }
    cout<<"Maximum value is: "<<mx;
}