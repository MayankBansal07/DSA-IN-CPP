#include<iostream>
using namespace std;
int main(){
     //print the reverse of number
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int reverse = 0;
    while(n>0){
        reverse = reverse * 10;
        reverse = reverse + n%10;
        n = n/10;
    }
    cout<<"The reverse no. is : "<<reverse;

}