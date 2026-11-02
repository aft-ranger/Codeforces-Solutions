#include <iostream>
#include <vector>
using namespace std;

// A. Line Trip
// Problem: https://codeforces.com/problemset/problem/1901/A

int main () {
    int t, n, x;
    cin >> t;
    while (t--) {
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int max = 0;
        for (int i = 0; i < n - 1; i++) {
            if (arr[i+1] - arr[i] > max) {
                max = arr[i+1] - arr[i];
            }
        }
        if (2*(x - arr[n-1]) > max) {
            max = 2*(x - arr[n-1]);
        }
        if (arr[0] > max) {
            max = arr[0];
        }
        cout << max << endl;
    }
    return 0;
}