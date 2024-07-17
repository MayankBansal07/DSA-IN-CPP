#include<iostream>
using namespace std;
int main(){
    // take 3 no. and tell if they are sides of triangle or not'
    int a,b,c;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    cout<<"Enter c : ";
    cin>>c;
    if ((a+b)>c && (a+c)>b && (b+c)>a){
        cout<<"Sides of triangle"<<endl;
    }
    else{
        cout<<"Not sides of triangle"<<endl;
    }
}