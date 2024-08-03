#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[1000];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the target difference: ";
    cin>>target;
    if (target<0)
    target = target * -1;

    int start = 0, end = 1;
    while(end<n)
    {
        if (arr[end]-arr[start]==target)
        cout<<"1";
        else if (arr[end]-arr[start]<target)
        end++;
        else
        start++;

        if (start==end)
        end++;
    }
    cout<<"0";
}





