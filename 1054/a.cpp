#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n;
    cin >> n;
    ll zero = 0;
    ll neg = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x == 0) zero++;
        else if (x == -1) neg++;
    }
    if (neg % 2 == 1) cout << zero + 2 << '\n';
    else cout << zero << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--) solve();
}