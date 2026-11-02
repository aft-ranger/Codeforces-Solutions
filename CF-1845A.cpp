#include <iostream>
#include <vector>
using namespace std;

// A. Forbidden Integer
// Problem: https://codeforces.com/problemset/problem/1845/A

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    int n, k, x;
    cin >> t;
    while(t--) {
        cin >> n >> k >> x;
        if (x != 1) {
            cout << "Yes" << endl << n << endl;
            for (int i = 0; i < n; i++) {
                cout << 1 << " ";
            }
        }
        else {
            if (n % 2 == 0 && k > 2) {

                
            }
        }
    }
}