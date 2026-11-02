#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int r, s, p;
        cin >> r >> s >> p;
        if (r >= s)
        {
            cout << string(r + s + p, 'P');
        }
        else if (s >= p)
        {
            cout << string(r + s + p, 'R');
        }
        else
        {
            cout << string(r + s + p, 'S');
        }

        cout << '\n';
    }

    return 0;
}