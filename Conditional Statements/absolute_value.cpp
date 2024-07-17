#include<iostream>
using namespace std;
int main(){
    //to print absolute value
    int n;
    cout<<"Enter n : ";
    cin>>n;
    if (n<0){
        cout<<"Absolute value of "<<n<<" is "<<-n;
        }
    else{
        cout<<"Absolute value of "<<n<<" is "<<n;
    }
}