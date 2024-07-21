#include<iostream>
using namespace std;
//print the sum from 1 to n (parameterised)
void sum1toN(int n,int sum){
    if (n==0){
        printf("%d",sum);
        return;
    }
    sum1toN(n-1,sum+n);
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    sum1toN(n,0);
}