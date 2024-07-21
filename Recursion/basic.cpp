#include<iostream>
using namespace std;
//loop inside loop calling itself
void greet(){
    cout<<"Hello World"<<endl;
    greet(); // it infinite times loop
}
int main(){
    greet();
}