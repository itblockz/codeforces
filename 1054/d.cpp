#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll f(vector<ll> a) {
    ll x = 0;
    ll m = a.size() / 2;
    for (ll i = 0; i < a.size(); i++)
    {
        x += abs(a[i] - a[m]) - abs(i - m);
    }
    return x;
}

void solve() {
    ll n;
    string s;
    cin >> n >> s;
    vector<ll> a, b;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'a') a.push_back(i);
        else b.push_back(i);
    }
    cout << min(f(a), f(b)) << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--) solve();
}