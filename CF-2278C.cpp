#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        long long n;
        cin >> n;
        long long m = 0;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 1) {
                m++;
            }
        }
        if (m == n) {
            cout << -1 << endl;
            continue;
        }
        if (n == 2) {
            cout << a[0] + a[1] - 1 << endl;
            continue;
        }
        if (n == 1) {
            cout << a[0] << endl;
            continue;
        }
        else{
            long long sum = 0;
            for(int i = 0; i < n; i++) {
                sum += a[i];
            }
            cout << sum - 1 << endl;
        }
    }
}