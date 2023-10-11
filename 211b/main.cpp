#include <iostream>
#include <list>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int h[n];
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    list<int> ans;
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += h[i];
    }
    if (sum == k) {
        cout << 1;
        return 0;
    }
    int minIdx = 0;
    int minVal = sum;
    for (int i = 1; i <= n-k; i++)
    {
        sum = sum - h[i-1] + h[i + k-1];
        if (sum == k) {
            cout << i+1;
            return 0;
        }
        if (sum < minVal) {
            minIdx = i;
            minVal = sum;
        }
    }
    cout << minIdx+1;
    return 0;
}