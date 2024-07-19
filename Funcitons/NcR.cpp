#include<iostream>
using namespace std;
// combination
int fact(int x){
    int f = 1;
    for( int i=1;i<=x;i++){
        f = f*i;
    }
    return f;
} 
int main(){
    int n,r;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Enter the value of r: ";
    cin>>r;
    int a = fact(n);
    int b = fact(r);
    int c = fact(n-r);
    cout<<"The no. of combinations are: "<<a/(b*c);
}