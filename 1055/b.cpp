#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n, rk, ck, rd, cd;
    cin >> n >> rk >> ck >> rd >> cd;
    ll ans = 0;
    if (rd > rk) ans = max(ans, rd);
    else if (rd < rk) ans = max(ans, n - rd);
    if (cd > ck) ans = max(ans, cd);
    else if (cd < ck) ans = max(ans, n - cd);
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--) solve();
}