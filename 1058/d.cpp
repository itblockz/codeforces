#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int query(vector<ll> s) {
    cout << "? " << s.size();
    for (ll i : s) cout << " " << i;
    cout << endl;
    ll x;
    cin >> x;
    return x;
}

void solve() {
    ll n;
    cin >> n;
    ll m = 2 * n;
    vector<ll> a(m + 1), s, t;

    for (ll i = 1; i <= m; i++)
    {
        s.push_back(i);
        ll x = query(s);
        if (x > 0) {
            a[i] = x;
            s.pop_back();
            t.push_back(i);
        }
    }
    
    for (ll i : s) {
        t.push_back(i);
        ll x = query(t);
        t.pop_back();
        a[i] = x;
    }

    cout << "!";
    for (ll i = 1; i <= m; i++) cout << " " << a[i];
    cout << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t; 
    while (t--) solve();
}