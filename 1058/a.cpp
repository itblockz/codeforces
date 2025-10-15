#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(101);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a[x]++;
    }
    ll mex = 101;
    for (ll i = 0; i < 101; i++)
    {
        if (!a[i]) {
            mex = i;
            break;
        }
    }
    cout << mex << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t; 
    while (t--) solve();
}