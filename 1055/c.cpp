#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n);
    for (ll &x : a) cin >> x;

    vector<ll> pref_o(n+1);
    for (ll i = 1; i <= n; i++)
    {
        pref_o[i] = pref_o[i-1];
        if (a[i-1] == 1) pref_o[i]++;
    }
    
    vector<ll> pref_eq(n+1);
    for (ll i = 1; i < n; i++)
    {
        pref_eq[i+1] = pref_eq[i];
        if (a[i] == a[i-1]) pref_eq[i+1]++;
    }

    for (ll i = 0; i < q; i++)
    {
        ll l, r;
        cin >> l >> r;
        ll o = pref_o[r] - pref_o[l-1];
        ll z = r-l+1 - o;
        if (o % 3 != 0 || z % 3 != 0) {
            cout << "-1\n";
            continue;
        }
        if ((pref_eq[r]-pref_eq[l]) > 0) {
            cout << (r-l+1)/3 << '\n';
        } else {
            cout << 2 + (r-l-2)/3 << '\n';
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--) solve();
}