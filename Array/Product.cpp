#include<iostream>
using namespace std;
int main(){
    //finding product of all element of array
    int arr[] = {1,86,14,5,69,7,2,2,0};
    int product = 1;
    int n = sizeof(arr)/4;
    for(int i=0;i<n;i++){
        product *= arr[i];
    }
    cout<<"Product of elements of array is: "<<product;
}