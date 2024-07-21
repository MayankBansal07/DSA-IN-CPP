#include<iostream>
using namespace std;
int main(){
    //reverse the array without using any array
    int n = 5;
    int a[n];
    for (int i=0;i<=n-1;i++){
        a[i] = i+1;
    }
    for (int i=0;i<=n-1;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int i = 0;
    int j = n-1;
    while (i<j){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
    for (int i=0;i<=n-1;i++){
        cout<<a[i]<<" ";
    }
}