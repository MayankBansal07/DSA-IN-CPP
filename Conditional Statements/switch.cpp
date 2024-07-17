#include<iostream>
using namespace std;
int main(){
    //using switch statements
    int a;
    cout<<"Enter a : ";
    cin>>a;
    switch (a) {
        case 1:
        cout<<"One"<<endl;
        break;
        case 2:
        cout<<"Two"<<endl;
        break;
        case 3:
        cout<<"Three"<<endl;
        break;
        default:
        cout<<"Invalid"<<endl;
    }
}