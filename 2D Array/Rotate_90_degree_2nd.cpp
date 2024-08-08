#include<iostream>
using namespace std;

int main() {
    //space and time complexicity is n square
    int n, m;
    cout << "Enter the number of rows and columns of the matrix: ";
    cin >> n >> m;

    int arr[10][10];
    cout << "Enter the elements of the matrix: ";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    //transpose of matrix
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            swap(arr[i][j],arr[j][i]);
        }
    };

    //reverse the row to get 90 degree rotated matrix
    for(int i=0;i<n;i++){
        int start = 0, end = n-1;
        while(start<=end){
            swap(arr[i][start],arr[i][end]);
            start++,end--;
        }
    };

    cout << "Rotated Matrix: " << endl;
    for(int i = 0; i < m; i++) { // Use m and n to loop through the rotated matrix
        for(int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
