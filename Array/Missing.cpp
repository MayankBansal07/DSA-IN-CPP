#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n-1;i++)
    {
        cin>>a[i];
    }
    int sum = 0;
    for( int i=0;i<n-1;i++)
    {
        sum+=a[i];
    }
    int ans = n*(n+1)/2;
    cout<<ans-sum;
} 