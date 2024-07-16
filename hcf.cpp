#include<iostream>
using namespace std;
int main(){
    // //display highest factor of number n other than itself
    int n,hf;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            hf = i;
        }
    }
    cout<<"Highest factor of "<<n<<" is : "<<hf;

    //another method for highest factor
    int n,hf;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i=n/2;i>=1;i--){
        if(n%i==0){
            cout<<"Highest factor of "<<n<<" is : "<<i;
            break; // to get out of the loop imediately
        }
    }

}