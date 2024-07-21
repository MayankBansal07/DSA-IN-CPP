#include<iostream>
using namespace std;
int main(){
    //double even position and add 10 to odd places
    int arr[] = {1,2,3,4,5};
    for(int i=0;i<=4;i++){
        if (i%2==0){
            arr[i] = 10 + arr[i];
        }
        else {
            arr[i] = arr[i]*2;
        }
    }
    for(int i=0;i<=4;i++){
        cout<<arr[i]<<" ";
    }
}