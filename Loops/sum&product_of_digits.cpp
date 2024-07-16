#include<iostream>
using namespace std;
int main(){
    //to find sum of no. of digits in number
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int sum = 0;
    while(n>0){
        int digit = n%10;
        sum = sum + digit;
        n = n/10;
    }
    cout<<"Sum of digits: "<<sum;

    //print the product of digits given in number (0 not included in no.)
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int mul = 1;
    while(n>0){
        int digit = n%10;
        mul = mul * digit;
        n = n/10;
    }
    cout<<"Multiplication of digits: "<<mul;

    //print the sum of even digits in number
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int sum = 0;
    while(n>0){
        int digit = n%10;
        if(digit%2==0){
            sum = sum + digit;
        }
        n = n/10;
    }
    cout<<"Sum of even digits: "<<sum;
}