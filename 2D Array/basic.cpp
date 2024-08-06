#include<iostream>
using namespace std;

void printcol(int arr[][4], int row, int col){
    for(int j=0;j<col;j++)
    for(int i=0;i<row;i++)
    cout<<arr[i][j]<<" ";
}

int main(){
    // //create 2d Array
    int arr1[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int arr2[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
    int ans[3][4];

    //print all values
    for(int i=0;i<3;i++)
    for(int j=0;j<4;j++)
    cout<<arr[i][j]<<" ";

    //print all the values in array col wise, function call
    printcol(arr,3,4);

    //find an element in our array
    int x=17;
    for(int row=0;row<3;row++)
    for(int col=0;col<4;col++)
    {
        if(arr[row][col]==x)
        {
            cout<<"Yes";
            return 0;
        }
    }
    cout<<"No";

    //Add two matrix
    for(int i=0;i<3;i++)
    for(int j=0;j<4;j++)
    {
        ans[i][j]=arr1[i][j]+arr2[i][j];
    }
    cout<<"Addition of two matrix"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }


    //which row sum is greatest
    int sum=INT8_MIN,index=-1;
    for(int i=0;i<3;i++){
        int total=0;
        for(int j=0;j<4;j++){
            total+=arr1[i][j];
            if(sum<total){
                sum=total;
                index=i;
            }
        }
    }
    cout<<"Maximum sum row index: "<<index;

    //print the sum of diagonal elements of array
    int first=0,second=0;
    int arr[3][3] = {1,22,3,5,789,15,3,5,32};
    for(int i=0;i<3;i++){
        first += arr[i][i];
    }
    cout<<"Total of first diagonal of array: "<<first<<endl;

    int i=0,j=2;
    while(j>=0){
        second+=arr[i][j];
        i++,j--;
    }
    cout<<"Total of second diagonal of array: "<<second;

    //find reverse of each row of array
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    for(int i=0;i<3;i++){
        int start = 0,end = 2;
        while(start<=end){
            swap(arr[i][start],arr[i][end]);
            start++,end--;
        }
    }
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
    cout<<arr[i][j]<<" ";
    }
    cout<<endl;
    }

}











