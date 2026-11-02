#include <iostream>
#include <vector>
using namespace std;

// A. Required Remainder
// Problem: https://codeforces.com/problemset/problem/1374/A

int main () {
    long long t, x, y, n, k;
    cin >> t;
    while (t--) {
        cin >> x >> y >> n;
        k = n - (n % x) + y;
        if (k > n) {
            k -= x;
        }
        cout << k << endl;
    }
    return 0;
}