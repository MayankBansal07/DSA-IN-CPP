#include<iostream>
using namespace std;
//print 1 to n
void print(int x, int n){
    if (x>n) return;
    cout<<x<<endl;
    print(x+1, n);
}
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    print(1,n);
}