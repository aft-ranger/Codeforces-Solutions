#include <iostream>
#include <vector>
using namespace std;

// A. Boy or Girl
// Problem: https://codeforces.com/problemset/problem/236/A

int main () {
    string s;
    int counter = 0;
    cin >> s;
    for (int i = 0; i < s.length() ; i++) {
        int flag = 1;
        for (int j = 0; j < i; j++) {
            if (s[i] == s[j]) {
                flag = 0;
            }
        }
        if (flag) {
            counter++;
        }
    }
    if (counter % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
}