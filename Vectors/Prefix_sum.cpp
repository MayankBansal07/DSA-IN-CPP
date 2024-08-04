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
    vector<int>prefix(n);
    prefix[0]=arr[0];
    for(int i=1;i<n;i++)
    prefix[i]=prefix[i-1]+arr[i];
    for(auto i: prefix){
        cout<<i<<" ";
    }
}





