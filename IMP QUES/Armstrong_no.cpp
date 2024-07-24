#include<iostream>
using namespace std;
#include<cmath>
int count_digit(int n)
{
    int count = 0;
    while(n)
    {
        count++;
        n/=10;
    }
    return count;
}

bool armstrong(int num,int digit)
{
    int rem, ans = 0, n = num; 
    while(n>0)
    {
        rem = n%10;
        n/=10;
        ans = ans + pow(rem,digit);
        // cout<<ans<<endl;
    }
    // cout<<pow(5,3)<<endl;
    // cout<<x<<endl;
    cout<<ans<<endl;
    if (ans == num)
    return 1;
    else
    return 0;

}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int digit = count_digit(n);
    cout<<armstrong(n,digit);

}