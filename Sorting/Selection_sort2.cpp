#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of elements of array: ";
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int index;
    for (int i=0;i<n-1;i++)
    {
        index = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]>arr[index])
            index = j;
        }
        swap(arr[i],arr[index]);
    }
    cout<<"Array in decreasing order: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}


