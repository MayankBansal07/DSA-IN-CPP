#include<iostream>
using namespace std;
int main(){
    // dereference operator --> * (star operator)
    // to print the value --> *p (value at address p)

    // changing value of x using pointer
    int x = 12;
    int* ptr = &x;
    cout<<x<<endl;
    *ptr = 23;
    cout<<x<<endl;
}