#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> cnt(n + 1);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        cnt[x]++;
    }
    ll ans = 0;
    for (ll i = 0; i < k; i++)
    {
        if (cnt[i] == 0) ans++;
    }
    cout << max(ans, cnt[k]) << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--) solve();
}