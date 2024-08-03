#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[100];
    cout<<"Enter elements for the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the target: ";
    cin>>target;
    int start = 0, end = n-1;
    while(start<end){
        if (arr[start] + arr[end] == target)
        {
            cout<<"Pair found: "<<arr[start]<<" "<<arr[end]<<endl;
            start++;
            end--;
        }
        else if (arr[start] + arr[end] < target)
        {
            start++;
        }
        else
        {
            end--;
        }
    }
}


