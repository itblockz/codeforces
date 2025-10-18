#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n;
    string s;
    cin >> n >> s;
    vector<ll> a;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '0') a.push_back(i + 1);
    }
    cout << a.size() << '\n';
    for (ll x : a) cout << x << ' ';
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--) solve();
}