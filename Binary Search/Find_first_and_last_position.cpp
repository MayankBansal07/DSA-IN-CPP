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
    //for vector we can find size/end by giving arr.size() ot directly gives size of array
    int start = 0, end= n-1, first = -1, last = -1, mid;
    // find first
    while(start<=end)
    {
        mid = start + (end-start)/2;
        if(arr[mid]==target)
        {
            first = mid;
            end = mid - 1;
        }
        else if(arr[mid]<target)
        start = mid + 1;
        else
        end = mid - 1;
    }
    //find last
    start = 0, end = n-1;
    while(start<=end)
    {
        mid = start + (end-start)/2;
        if(arr[mid]==target)
        {
            last = mid;
            start = mid + 1;
        }
        else if(arr[mid]<target)
        start = mid + 1;
        else
        end = mid - 1;
    }
    cout<<first<<" "<<last;
}