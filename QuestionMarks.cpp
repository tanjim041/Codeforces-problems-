#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int a = count(s.begin(), s.end(), 'A');
        int b = count(s.begin(), s.end(), 'B');
        int c = count(s.begin(), s.end(), 'C');
        int d = count(s.begin(), s.end(), 'D');
        int q = count(s.begin(), s.end(), '?');

        int na = max(0, n - a);
        int nb = max(0, n - b);
        int nc = max(0, n - c);
        int nd = max(0, n - d);

        int total = na + nb + nc + nd;

        int cur = min(a, n) + min(b, n) + min(c, n) + min(d, n);

        int m = cur + min(total, q);
        cout << m-q << endl;
         cout<< endl;
    }
}

