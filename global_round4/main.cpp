#include <iostream>
using namespace std;

void print(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    string str;
    cin >> str;
    int n = str.length();
    long long dp[n];
    dp[0] = 0;
    for (int i = 1; i < n; i++)
    {
        dp[i] = dp[i-1];
        if (str[i] == 'v' && str[i-1] == 'v') {
            dp[i] = dp[i-1] + 1;
        }
    }
    // print(dp, n);
    long long cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'o') {
            cnt += dp[i] * (dp[n-1]-dp[i]);
        }
    }
    cout << cnt << endl; 
    return 0;
}