#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n, k;
    string s;
    cin >> n >> k >> s;
    string ans = string(n, '+');
    ll l = 0;
    ll r = n-1;
    ll unk = 0;
    for (ll i = 0; i < k; i++)
    {
        if (s[i] == '0') ans[l++] = '-';
        else if (s[i] == '1') ans[r--] = '-';
        else unk++;
    }
    ll remain = r-l+1;
    if (remain == unk) {
        for (ll i = 0; i < unk; i++)
        {
            if (ans[l] == '+') ans[l++] = '-';
        }
    } else {
        for (ll i = 0; i < unk; i++)
        {
            if (ans[l] == '+') ans[l++] = '?';
            if (ans[r] == '+') ans[r--] = '?';
        }
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--) solve();
}