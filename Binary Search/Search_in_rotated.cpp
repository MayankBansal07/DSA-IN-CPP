#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[1000];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the target: ";
    cin>>target;
    int start=0,end=n-1,mid,ans = -1;
    while(start<=end){
        mid=start + (end-start)/2;
        if(arr[mid]==target){
            ans = mid;
            break;
        }
        else if(arr[mid]>=arr[0]){
            if(arr[mid]>=target && target>=arr[start])
            end = mid-1;
            else
            start = mid+1;
        }
        else{
            if(arr[mid]<=target && target<=arr[end])
            start = mid+1;
            else
            end = mid-1;
        }
    }
    cout<<ans;
}


