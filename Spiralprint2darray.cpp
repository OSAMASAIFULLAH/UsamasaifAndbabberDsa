#include <iostream>
using namespace std;

int main() {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int count = 0;
    int top = 0;
    int right = 2;
    int bottom = 2;
    int left = 0;

    while (count < 9) {

        // Print top row
        for (int j = left; j <= right; j++) {
            cout << arr[top][j] << ",";
            count++;
        }
        top++;

        // Print right column
        for (int j = top; j <= bottom; j++) {
            cout << arr[j][right] << ",";
            count++;
        }
        right--;

        // Print bottom row only if rows remain
        if (top <= bottom) {
            for (int j = right; j >= left; j--) {
                cout << arr[bottom][j] << ",";
                count++;
            }
            bottom--;
        }

        // Print left column only if columns remain
        if (left <= right) {
            for (int j = bottom; j >= top; j--) {
                cout << arr[j][left] << ",";
                count++;
            }
            left++;
        }
    }
}