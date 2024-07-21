#include<iostream>
using namespace std;
// print 1 to n using recursions without extra parameter (IMPORTANT)
void print(int n){
    if (n==0) return; // //Base case
    print(n-1); // //call
    cout<<n<<endl; // //work
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    print(n);
}