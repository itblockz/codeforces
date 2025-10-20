#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n, k;
    string s;
    cin >> n >> k >> s;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '0') continue;
        ll cnt = 0;
        for (ll j = 1; j < k; j++)
        {
            if (i - j < 0) break;
            if (s[i - j] == '1') cnt++;
        }
        if (cnt == 0) ans++;
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