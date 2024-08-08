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

    int ans[10][10] = {0}; // Initialize the answer matrix with 0s
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            ans[j][n-i-1] = arr[i][j];
        }
    }

    cout << "Rotated Matrix: " << endl;
    for(int i = 0; i < m; i++) { // Use m and n to loop through the rotated matrix
        for(int j = 0; j < n; j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}






