#include <iostream>
using namespace std;

// A. Calculating Function
// Problem: https://codeforces.com/problemset/problem/486/A

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    long long result = (n % 2 == 0) ? n / 2 : -(n + 1) / 2;
    cout << result << '\n';
}
