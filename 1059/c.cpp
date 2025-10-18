#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll countbit(ll a) {
    if (a == 0) return 1;
    ll cnt = 0;
    while (a > 0) {
        a >>= 1;
        cnt++;
    }
    return cnt;
}

void solve() {
    ll a, b;
    cin >> a >> b;
    ll na = countbit(a);
    ll nb = countbit(b);
    if (na < nb) {
        cout << "-1\n";
        return;
    }
    ll mask = (1 << na) - 1;
    ll x1 = ~a & mask;
    ll x2 = ~b & mask;
    cout << "2\n" << x1 << ' ' << x2 << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--) solve();
}