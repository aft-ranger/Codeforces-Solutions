#include <iostream>
#include <vector>
using namespace std;

// A. Perfect Sandwiches
// Problem: https://codeforces.com/problemset/problem/2276/A


int main () {
    

    int sandwiches, cheese, sausage;
    int maxx;
    cin >> sandwiches;

    while (sandwiches--) {
        cin >> cheese >> sausage;
        maxx = 0;
        int x = 1;
        int p = min(cheese, sausage);
        while (x <= p) {
            if (cheese%x == 0 && sausage%x == 0) {
                maxx = x;
            }
            x++;
        }
        if (maxx == 1 && ((cheese != 1 && sausage != 1) || (cheese == 1))) {
            cout << "-1\n";
        }
        else {
            cout << maxx << '\n';
        }
    }
    return 0;
}