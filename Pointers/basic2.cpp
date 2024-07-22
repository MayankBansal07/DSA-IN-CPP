#include<iostream>
using namespace std;
int main(){
    // declaring the pointer
    int x = 3;
    int* p;
    p = &x;
    cout<<&x<<endl;
    cout<<p<<endl;
    cout<<*p<<endl; // star operator
    cout<<&p<<endl;
}