#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n;
    cin >> n;

    map<ll, ll> freq;
    vector<ll> odd;
    ll sum = 0;
    ll cnt = 0;

    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        freq[x]++;
    }

    for (auto [x, c] : freq){
        if (c % 2 == 1) {
            odd.push_back(x);
        }
        ll p = c / 2;
        sum += x * p * 2;
        cnt += p * 2;
    }
    sort(odd.rbegin(), odd.rend());

    for (ll i = 0; i+1 < odd.size(); i++)
    {
        if (cnt == 0) break;
        if (odd[i] < odd[i+1] + sum) {
            cout << sum + odd[i] + odd[i+1] << '\n';
            return;
        }
    }

    if (!odd.empty() && odd.back() < sum && cnt >= 2) {
        cout << sum + odd.back() << '\n';
        return;
    }
    
    if (cnt >= 3) {
        cout << sum << '\n';
        return;
    }

    cout << "0\n";
}

int main() {
    ll t;
    cin >> t;
    while (t--) solve();
}