#include<iostream>
using namespace std;
int main(){
    //wap to check no. is composite or not
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            cout<<n<<" is composite number";
            break;
        }
    }

    //to check no. is either prime or composite
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    bool flag = true; // true means no. is prime
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            flag = false; // false means no. is composite
            break;
        }
    }
    if (n==1) cout<<"Neither prime nor Composite";
    else if (flag==true) cout<<"Number is prime";
    else cout<<"Number is composite";
}