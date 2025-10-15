#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n;
vector<ll> a(100000);

bool valid(vector<ll> &x) {
    ll vis = 1;
    for (ll i = 1; i < n; i++)
    {
        if (x[i]) vis++;
    }
    if (vis != a[0]) return false;
    
    for (ll i = 1; i < n; i++)
    {
        if (x[i] == 0 && x[i - 1] == 0) vis++;
        else if (x[i] == 1 && x[i - 1] == 1) vis--;
        if (vis != a[i]) return false;
    }
    return true;
}

void solve() {
    cin >> n;
    for (ll i = 0; i < n; i++) cin >> a[i];
    vector<ll> sol1, sol2;
    sol1.push_back(0); // left
    sol2.push_back(1); // right
    for (ll i = 0; i < n - 1; i++)
    {
        if (abs(a[i + 1] - a[i]) == 1) {
            sol1.push_back(sol1[i]);
            sol2.push_back(sol2[i]);
        } else if (abs(a[i + 1] - a[i]) == 0) {
            sol1.push_back(1 - sol1[i]);
            sol2.push_back(1 - sol2[i]);
        } else {
            cout << "0\n";
            return;
        }
    }
    
    ll ans = 0;
    if (valid(sol1)) ans++;
    if (valid(sol2)) ans++;
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--) solve();
}