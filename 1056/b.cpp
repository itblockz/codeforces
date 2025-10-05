#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n, k;
    cin >> n >> k;
    if (k == n*n - 1) {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            if (k > 0) {
                cout << 'U';
                k--;
            } else if (i < n-1) {
                cout << 'D';
            } else if (j < n-1) {
                cout << 'R';
            } else {
                cout << 'L';
            }
        }
        cout << '\n';
    }
    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--) solve();
}