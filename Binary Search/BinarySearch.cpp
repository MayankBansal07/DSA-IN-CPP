#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key){
    int start=0,end=n-1,mid;
    while(start<=end){
        mid=start + (end-start)/2;
        if(arr[mid]==key)
        return mid;
        else if(arr[mid]<key)
        start=mid+1;
        else
        end=mid-1;
    }

    return -1;

}
int main(){
    int n,arr[1000];
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched: ";
    int x;
    cin>>x;
    cout<<BinarySearch(arr,n,x);
    return 0;

}




