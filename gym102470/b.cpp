#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;
    ll p1, p2;
    while (n != 0) {
        p1 = p2 = 0;
        for (ll i = 0; i < n; i++)
        {
            string s;
            ll m;
            cin >> s >> m;
            if (s == "DROP") {
                cout << "DROP 2 " << m << '\n';
                p2 += m;
            } else {
                if (p1 >= m) {
                    cout << "TAKE 1 " << m << '\n';
                    p1 -= m;
                } else {
                    if (p1 > 0) cout << "TAKE 1 " << p1 << '\n';
                    m -= p1;
                    cout << "MOVE 2->1 " << p2 << '\n';
                    p1 = p2;
                    p2 = 0;
                    cout << "TAKE 1 " << m << '\n';
                    p1 -= m;
                }
            }
        }
        cout << '\n';
        cin >> n;
    }
}