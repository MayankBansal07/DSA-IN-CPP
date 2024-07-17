#include<iostream>
using namespace std;
int main(){
    // take 3 no. and check which is the greatest
    int a,b,c;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    cout<<"Enter c : ";
    cin>>c;
    if (a>b && a>c){
        cout<<"a is greatest"<<endl;
    }
    else if (b>c){
        cout<<"b is greatest"<<endl;
    }
    else{
        cout<<"c is greatest"<<endl;
    }
}