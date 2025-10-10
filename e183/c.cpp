#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n;
    string s;
    cin >> n >> s;
    ll cur = count(s.begin(), s.end(), 'a') - count(s.begin(), s.end(), 'b');
    ll ans = n;
    ll sum = 0;
    map<ll,ll> last;
    last[0] = -1;
    for (ll i = 0; i < n; i++)
    {
        sum += s[i] == 'a' ? 1 : -1;
        last[sum] = i;
        if (last.count(sum - cur)) {
            ans = min(ans, i - last[sum - cur]);
        }
    }
    cout << (ans == n ? -1 : ans) << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--) solve();
}