#include<iostream>
using namespace std;
// print n to 1 using recursions
void print(int n){
    if (n==0) return; // //Base case
    cout<<n<<endl; // //work
    print(n-1); // //call
}
int main(){
    print(5);
}