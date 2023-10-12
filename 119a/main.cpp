#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    // n = 5, a = 5, b = 3, c = 2;
    int arr[n+1] = {0};
    arr[n] = 1;
    for (int len = n; len > 0; len--) {
        if (arr[len] == 0) continue; // not possible length
        if (len-a >= 0) { // enough to give length a
            int cur = len-a > 0 ? arr[len]+1 : arr[len];
            if (cur > arr[len-a])
                arr[len-a] = cur;
        }
        if (len-b >= 0) { // enough to give length b
            int cur = len-b > 0 ? arr[len]+1 : arr[len];
            if (cur > arr[len-b])
                arr[len-b] = cur;
        }
        if (len-c >= 0) { // enough to give length c
            int cur = len-c > 0 ? arr[len]+1 : arr[len];
            if (cur > arr[len-c])
                arr[len-c] = cur;
        }
    }
    cout << arr[0];
    return 0;
}