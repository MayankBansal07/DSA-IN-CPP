#include<iostream>
using namespace std;
int main(){
    //calculate sum of elements of array
    int arr[5] = {1,2,69,4,78};
    int sum = 0;
    for(int i=0;i<5;i++){
        sum += arr[i];
    }
    cout<<sum;
}