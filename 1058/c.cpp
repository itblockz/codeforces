#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n;
    cin >> n;
    if (!n) {
        cout << "YES\n";
        return;
    }
    if (__builtin_parity(n)) {
        cout << "NO\n";
        return;
    }
    ll l = __builtin_ctz(n);
    ll r = 31 - __builtin_clz(n);
    while (l < r) {
        if (((n >> l) & 1) != ((n >> r) & 1)) {
            cout << "NO\n";
            return;
        }
        l++; r--;
    }
    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t; 
    while (t--) solve();
}