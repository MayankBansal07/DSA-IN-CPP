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
    int maxi = INT8_MIN;
    int prefix = 0;
    for (int i=0;i<n;i++)
    {
        prefix += arr[i];
        maxi = max(maxi,prefix);
        if (prefix<0)
        prefix = 0;
    }
    cout<<maxi;
}






