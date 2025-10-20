#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll N = 2e5 + 1;
vector<ll> pfac[N + 1];

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (ll &x : a) cin >> x;
    for (ll &x : b) cin >> x;

    set<ll> prime;
    for (ll i = 0; i < n; i++)
    {
        for (ll p : pfac[a[i]]) {
            if (prime.count(p)) {
                cout << "0\n";
                return;
            }
            prime.insert(p);
        }
    }

    for (ll i = 0; i < n; i++)
    {
        for (ll p : pfac[a[i] + 1]) {
            if (prime.count(p)) {
                cout << "1\n";
                return;
            }
        }
    }

    cout << "2\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (ll i = 2; i <= N; i++)
    {
        if (!pfac[i].empty()) continue;
        for (ll j = i; j <= N; j += i) {
            pfac[j].push_back(i);
        }
    }
    ll t;
    cin >> t;
    while (t--) solve();
}