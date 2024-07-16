#include<iostream>
using namespace std;
int main(){
    //to find the factorial of the number
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int fact = 1;
    for (int i=1;i<=n;i++){
        fact = fact * i;
    }
    cout<<"Factorial of the number: "<<fact;

    //print the factorial of first n numbers
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for (int i=1;i<=n;i++){
        int fact = 1;
        for(int j=1;j<=i;j++){
            fact = fact * j;
        }
        cout<<"The facorial of "<<i<<"! is: "<<fact<<endl;
    }
}