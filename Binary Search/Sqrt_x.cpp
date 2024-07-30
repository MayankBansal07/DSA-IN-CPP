#include<iostream>
using namespace std;
int main(){
    int target;
    cout<<"Enter the target: ";
    cin>>target;
    if(target<2)
    {
        cout<<"Target is zero";
        return target;
    }
    int start=0,end=target,mid,ans;
    while(start<=end){
        mid=start + (end-start)/2;
        if(mid==target/mid)
        {
           ans = mid;
           break; 
        }
        else if(mid<target/mid)
        {
            ans = mid;
            start=mid+1;
        }
        else
        {
            end = mid-1;
        }
    }
    cout<<"The postion of target is "<<ans;
}