#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the coordinates of bishop: ";
    cin>>a>>b;
    int count = 0;
    count += min(8-a,8-b);
    count += min(8-a,b-1);
    count += min(a-1,b-1);
    count += min(a-1,8-b);
    cout<<count;
}