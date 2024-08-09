#include <iostream>
using namespace std;

bool BinarySearch(int arr[][10], int n, int m, int key, int &row, int &column) {
    int start = 0, end = n * m - 1, mid;

    while (start <= end) {
        mid = start + (end - start) / 2;
        row = mid / m;
        column = mid % m;
        
        if (arr[row][column] == key)
            return true;
        else if (arr[row][column] < key)
            start = mid + 1;
        else
            end = mid - 1;
    }

    return false;
}

int main() {
    int n, m, arr[10][10];
    cout << "Enter the number of rows and columns of the array: ";
    cin >> n >> m;
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    cout << "Enter the element to be searched: ";
    int x;
    cin >> x;

    int row, column;
    bool found = BinarySearch(arr, n, m, x, row, column);

    if (found)
        cout << "Element found at position: (" << row << ", " << column << ")\n";
    else
        cout << "Element not found\n";

    return 0;
}
