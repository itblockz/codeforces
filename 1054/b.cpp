#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll &x : a) cin >> x;
    sort(a.begin(), a.end());
    ll best = 0;
    for (ll i = 0; i < n-1; i += 2)
    {
        best = max(best, a[i+1] - a[i]);
    }
    cout << best << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--) solve();
}