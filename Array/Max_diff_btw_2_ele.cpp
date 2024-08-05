#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[1000];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
    cin>>arr[i];
    }
    int mini = 0;
    int suffix = arr[n-1];
    for (int i=n-1;i>=1;i--)
    {
        mini = max(mini,suffix-arr[i]);
        suffix = max(arr[i],suffix);
    }
    cout<<mini;
}





