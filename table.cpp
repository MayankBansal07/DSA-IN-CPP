#include<iostream>
using namespace std;
int main(){
    //print the table of 19
    for(int i=1;i<=10;i++){
        cout<<"19 * "<<i<<" = "<<19*i<<endl;
    }

    //print the table of n
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i=1;i<=10;i++){
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }

}