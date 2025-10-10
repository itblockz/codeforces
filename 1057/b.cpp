#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll x, y, z;
    cin >> x >> y >> z;
    if ((y&x) == (x&z) && (x&y) == (y&z) && (x&z) == (z&y)) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    ll t;
    cin >> t;
    while (t--) solve();
}