#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll query(ll type, ll l, ll r) {
    ll x;
    cout << type << ' ' << l << ' ' << r << endl;
    cin >> x;
    return x;
}

void solve() {
    ll n;
    cin >> n;
    ll sum = query(2, 1, n);
    ll diff = sum - (n + 1) * n / 2;
    ll l = 1;
    ll r = n;
    while (l < r) {
        ll m = (l + r) / 2;
        if (query(1, 1, m) < query(2, 1, m)) r = m;
        else l = m + 1;
    }
    cout << "! " << l << ' ' << l + diff - 1 << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--) solve();
}