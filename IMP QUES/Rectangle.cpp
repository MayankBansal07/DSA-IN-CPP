#include<iostream>
using namespace std;
//checking these are sides of rectangle or not
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if ((a==b && c==d) || (a==c && b==d) || (a==d && b==c))
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}