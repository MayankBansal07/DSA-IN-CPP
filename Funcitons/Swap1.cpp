#include<iostream>
using namespace std;
//swap two numbers
int main(){
    int x=2,y=5;
    cout<<x<<" "<<y<<endl;
    int temp =x;
    x=y;
    y=temp;
    cout<<x<<" "<<y<<endl;
}