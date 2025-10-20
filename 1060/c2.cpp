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

    vector<ll> ord(n);
    iota(ord.begin(), ord.end(), 0);
    sort(ord.begin(), ord.end(), [&](ll i, ll j) {return b[i] < b[j];});

    ll ans = b[ord[0]] + b[ord[1]];

    for (ll i = 0; i < n; i++)
    {
        for (ll p : pfac[a[i] + 1]) {
            if (prime.count(p)) {
                ans = min(ans, b[i]);
            }
        }
    }

    set<ll> check;
    ll idx = ord[0];
    for (ll i = 0; i < n; i++)
    {
        if (i == idx) continue;
        for (ll p : pfac[a[i]]) check.insert(p);
    }
    
    for (ll p : check) {
        ll k = (p - (a[idx] % p)) % p;
        ans = min(ans, k * b[idx]);
    }

    cout << ans << '\n';
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