#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll MAX_N = 50000;
vector<double> xs(MAX_N + 1), ys2(MAX_N + 1);
ll n;

double f(double x) {
    double best = 0;
    for (ll i = 0; i < n; i++)
    {
        double dx = xs[i] - x;
        double d2 = dx * dx + ys2[i];
        best = max(best, d2);
    }
    return best;
}

int main() {
    while (true) {
        scanf("%lld", &n);
        if (!n) break; 
        double minx = 2e5;
        double maxx = -2e5;
        for (ll i = 0; i < n; i++)
        {
            double x, y;
            scanf("%lf %lf", &x, &y);
            xs[i] = x;
            ys2[i] = y * y;
            minx = min(minx, x);
            maxx = max(maxx, x);
        }
        
        double l = minx;
        double r = maxx;
        double eps = 1e-6;
        while (r - l > eps) {
            double m1 = l + (r - l) / 3;
            double m2 = r - (r - l) / 3;
            double f1 = f(m1);
            double f2 = f(m2);
            if (f1 > f2) {
                l = m1;
            } else {
                r = m2;
            }
        }
        double m = (l + r) / 2;
        printf("%.6f %.6f\n", m, sqrt(f(m)));
    }
}