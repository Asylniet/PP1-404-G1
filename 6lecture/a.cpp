// Problem M. 74501. Spiral.
// Return all elements of the matrix in spiral order, given a matrix of nxn elements. Numbers start increasing around the corner matrix(a[0][0]) then goes inside up to the middle element making spiral shape.
// Input
// The first line contains integer n (1 ≤ n ≤ 105). Remaining lines contain integers a[i][j] (1 ≤ a[i][j] ≤ 109) — elements of matrix.
// Output
// Spiral matrix.
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int matrix[n][n];
    int top = 0, bottom = n - 1, left = 0, right = n - 1;
    int num = 1;

    while (top <= bottom && left <= right) {
        // Traverse the top row
        for (int i = left; i <= right; i++) {
            matrix[top][i] = num++;
        }
        ++top;

        // Traverse the right column
        for (int i = top; i <= bottom; i++) {
            matrix[i][right] = num++;
        }
        --right;

        // Traverse the bottom row
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                matrix[bottom][i] = num++;
            }
            --bottom;
        }

        // Traverse the left column
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                matrix[i][left] = num++;
            }
            ++left;
        }
    }

    // Print the spiral matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}