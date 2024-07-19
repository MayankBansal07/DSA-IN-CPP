#include<iostream>
using namespace std;
//swap method 2
int main(){
    int x=2,y=5;
    cout<<x<<" "<<y<<endl;
    x = x+y;
    y = x-y;
    x = x-y;
    cout<<x<<" "<<y<<endl;
}