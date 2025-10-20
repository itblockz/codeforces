#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll &x : a) cin >> x;
    ll mx = 0;
    for (ll i = 0; i < n; i++)
    {
        mx = max(mx, a[i]);
        if (i % 2 == 1) a[i] = mx;
    }
    ll ans = 0;
    for (ll i = 0; i < n; i += 2)
    {
        if (i >= 1 && a[i] >= a[i - 1]) {
            ans += a[i] - a[i - 1] + 1;
            a[i] = a[i - 1] - 1;
        }
        if (i + 1 < n && a[i] >= a[i + 1]) {
            ans += a[i] - a[i + 1] + 1;
            a[i] = a[i + 1] - 1;
        }
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