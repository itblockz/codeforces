#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n;
    cin >> n;
    ll w = n;
    ll l = 0;
    ll ans = 1;
    while (!(w == 1 && l == 1)) {
        ans += w/2;
        ans += l/2;
        l = l - l/2 + w/2;
        w -= w/2;
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--) solve();
}