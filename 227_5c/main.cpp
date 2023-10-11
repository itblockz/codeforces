#include <iostream>
using namespace std;

string findMax(int m, int s) {
    if (m == 1) return to_string(s);
    return s > 9 ? "9"+findMax(m-1,s-9) : to_string(s)+findMax(m-1,0);
}

string findMin(int m, int s) {
    if (m == 1) return to_string(s);
    return s-1 > 9 ? findMin(m-1,s-9)+"9" : findMin(m-1,1)+to_string(s-1);
}

int main() {
    int m,s;
    cin >> m;
    cin >> s;
    if ((m > 1 && s == 0) || s > 9*m) {
        cout << "-1 -1";
    } else {
        cout << findMin(m,s) << " " << findMax(m,s);
    }
    return 0;
}