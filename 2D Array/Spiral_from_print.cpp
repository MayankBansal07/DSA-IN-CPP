#include <iostream>
using namespace std;

void Spiral(int arr[][10], int row, int col){
    int top = 0, bottom = row - 1, left = 0, right = row -1;
    while(top<=bottom && left<=right){
        for(int i = left; i<=right; i++){
            cout<<arr[top][i]<<" ";
        }
        top++;
        for(int i = top; i<=bottom; i++){
            cout<<arr[i][right]<<" ";
        }
        right--;
        if(top<=bottom){
            for(int i = right; i>=left; i--){
                cout<<arr[bottom][i]<<" ";
            }
            bottom--;
        }
        if(left<=right){
            for(int i = bottom; i>=top; i--){
                cout<<arr[i][left]<<" ";
            }
            left++;
        }
    }
}

int main() {
    int n, m;
    cout << "Enter the number of rows and columns in the array: ";
    cin >> n >> m;
    int arr[10][10];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];

    Spiral(arr, n, m);
    return 0;
}



