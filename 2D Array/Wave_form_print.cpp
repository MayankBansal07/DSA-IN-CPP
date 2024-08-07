#include <iostream>
using namespace std;

void WaveForm(int arr[][10], int row, int col) {
    for (int j = 0; j < col; j++) {
        if (j % 2 == 0) {
            for (int i = 0; i < row; i++) {
                cout << arr[i][j] << " ";
            }
        } else {
            for (int i = row - 1; i >= 0; i--) {
                cout << arr[i][j] << " ";
            }
        }
    }
    cout << endl;
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

    WaveForm(arr, n, m);
    return 0;
}




