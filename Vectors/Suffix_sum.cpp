#include<iostream>
#include<vector>
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
    //4 5 -3 1 2
    //2 3 0 5 9
    vector<int>prefix(n);
    prefix[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--)
    prefix[i]=prefix[i+1]+arr[i];
    for(auto i: prefix){
        cout<<i<<" ";
    }
}



