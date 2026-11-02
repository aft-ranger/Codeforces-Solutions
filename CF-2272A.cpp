#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//Problem A. Maximize One MEX
//https://codeforces.com/contest/2272/problem/A


int main() {
    int t, n, k;
    int counter = 0;
    int flag = 0;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        int temp = 0, temp2 = 0;
        flag = 0;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int m = n - k + 1;        
        counter = 0;
        for (int i = 0; i < m; i++) {
            if (arr[i] < m) {
                counter++;
            }
        }
        if (counter == m) {        
            flag = 1;
        }
        if (flag) {
            cout << -1 << endl;
            continue;
        }

       
        int x = 0;
        while (true) {
            bool found = false;
            for (int i = 0; i < m; i++) {
                if (arr[i] == x) {
                    found = true;
                }
            }
            if (!found) {
                break;
            }
            x++;
        }

        for (int i = 0; i < m; i++) {
            if (arr[i] > arr[temp2]) {
                temp2 = i;
            }
        }
   
        for (int i = m; i < n; i++) {
            if (arr[i] == x) {
                temp = i;
            }
        }
        cout << temp2 + 1 << " " << temp + 1 << endl;
    }
}