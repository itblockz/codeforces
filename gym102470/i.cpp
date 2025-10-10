#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, m;
    cin >> n >> m;
    while (n != 0 || m != 0) {
        vector<pair<ll, ll>> a;
        for (ll i = 0; i < n; i++)
        {
            ll s, d;
            cin >> s >> d >> s >> d;
            a.emplace_back(s, d);
        }
        for (ll i = 0; i < m; i++)
        {
            ll s2, d2;
            cin >> s2 >> d2;
            ll cnt = 0;
            for (auto [s, d] : a) {
                if (s2 <= s && s2 + d2 > s || s <= s2 && s + d > s2) cnt++;
            }
            cout << cnt << '\n';
        }
        cin >> n >> m;
    }
    
}