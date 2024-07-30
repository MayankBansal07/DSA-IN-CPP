#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int target;
    cout<<"Enter the target: ";
    cin>>target;
    int arr[1000];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int start=0,end=n-1,mid,ans=n;
    while(start<=end){
        mid=start + (end-start)/2;
        if(arr[mid]==target)
        {
           ans = mid;
           break; 
        }
        else if(arr[mid]<target)
        start=mid+1;
        else
        {
            ans = mid;
            end = mid-1;
        }
    }
    cout<<"The postion of target is "<<ans;
}