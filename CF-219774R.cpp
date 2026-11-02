#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// R. Permutation with Arrays
// Problem: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/R

int main () {
    long long n;
    cin >> n;
    vector<int> arr(n);
    for (long long i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    vector<int> perm(n);
    for (long long i = 0; i < n; i++) {
        cin >> perm[i];
    }
    sort(perm.begin(), perm.end());
    if (perm == arr) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
}