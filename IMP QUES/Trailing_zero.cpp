#include<iostream>
using namespace std;
// checking how many zeroes come in the last of factorial of a number 
int trailingZero(int n)
{
    int count = 0;

    while(n>5)
    {
        count += n/5;
        n/=5;
    }
    return count;
}


int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<trailingZero(num);
     
}