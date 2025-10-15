#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n;
    cin >> n;
    vector<ll> b(n), a(n);
    for (ll &x : b) cin >> x;
    a[0] = 1;
    ll j = 2;
    for (ll i = 1; i < n; i++)
    {
        ll diff = b[i] - b[i - 1];
        if (i >= diff) a[i] = a[i - diff];
        else a[i] = j++;
    }
    for (ll x : a) cout << x << " ";
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t; 
    while (t--) solve();
}