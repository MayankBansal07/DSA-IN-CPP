#include<iostream>
using namespace std;

int main(){
    int n, m;
    cout << "Enter the size of the array (rows and columns): ";
    cin >> n >> m;

    int arr[10][10];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    int target;
    cout << "Enter the target: ";
    cin >> target;

    int i = 0, j = m - 1;
    bool found = false;
    while(i < n && j >= 0) {
        if(arr[i][j] == target) {
            cout << "Found at position (" << i << ", " << j << ")\n";
            found = true;
            break;
        }
        else if(arr[i][j] > target) {
            j--; // Move left
        }
        else {
            i++; // Move down
        }
    }

    if (!found) {
        cout << "Element not found\n";
    }

    return 0;
}




