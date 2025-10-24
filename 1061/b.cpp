#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n, q;
    string s;
    cin >> n >> q >> s;

    bool hasB = false;
    for (char c : s) {
        if (c == 'B') hasB = true;
    }

    for (ll i = 0; i < q; i++)
    {
        ll x;
        cin >> x;
        
        if (hasB) {
            ll j = 0;
            while (x > 0) {
                if (s[j % n] == 'A') x--;
                else x >>= 1;
                j++;
            }
            cout << j << '\n';
        } else {
            cout << x << '\n';
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