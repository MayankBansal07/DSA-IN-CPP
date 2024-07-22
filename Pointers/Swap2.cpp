#include<iostream>
using namespace std;
// swapping using pointers by address
void swap(int& a,int& b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int x = 2;
    int y = 3;
    cout<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<x<<" "<<y<<endl;
}