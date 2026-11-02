#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int m, n;
        string p, q;

        cin >> m >> n;
        cin >> p >> q;

        bool possible = true;

        for (char c : q) {
            size_t pos = p.find(c);

            if (pos == string::npos) {
                possible = false;
                break;
            }

            p.erase(pos, 1);
        }

        sort(p.begin(), p.end());

        if (possible && p == "isx")
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}