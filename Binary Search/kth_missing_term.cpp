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
    int k;
    cout<<"Enter the kth term to be searched: ";
    cin>>k;
    int start=0,end=n-1,mid,ans=n;
    while(start<=end){
        mid=start + (end-start)/2;
        if(arr[mid]-mid-1>=k){
            ans = mid;
            end = mid - 1;
        }
        else
        start = mid + 1;
    }
    cout<<ans+k;
}


