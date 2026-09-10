#include <iostream>
using namespace std;

int main() {
    int arr[6] = {1,2,2,1,1,3};
    int n = 6;
    bool result = true;

    for(int i = 0; i < n; i++) {

        // Skip if we've already processed arr[i]
        bool seen = false;
        for(int k = 0; k < i; k++) {
            if(arr[k] == arr[i]) {
                seen = true;
                break;
            }
        }
        if(seen) continue;

        int count1 = 0;
        for(int j = 0; j < n; j++) {
            if(arr[j] == arr[i])
                count1++;
        }

        for(int m = i + 1; m < n; m++) {

            if(arr[m] == arr[i])
                continue;

            bool duplicate = false;
            for(int t = i + 1; t < m; t++) {
                if(arr[t] == arr[m]) {
                    duplicate = true;
                    break;
                }
            }
            if(duplicate) continue;

            int count2 = 0;
            for(int j = 0; j < n; j++) {
                if(arr[j] == arr[m])
                    count2++;
            }

            if(count1 == count2) {
                result = false;
                break;
            }
        }

        if(!result) break;
    }

    cout << result;
}