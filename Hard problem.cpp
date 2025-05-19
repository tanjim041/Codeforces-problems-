#include <bits/stdc++.h>
typedef long long l;
using namespace std;
int main() {
    l n, i, res, a=0, arev, na, narev;
    cin >> n;
    vector<l> v(n);
    vector<string> s(n), srev(n);
    for (i = 0; i < n; ++i)
        cin >> v[i];
    for (i = 0; i < n; ++i) {
        cin >> s[i];
        srev[i] = s[i];
        reverse(srev[i].begin(), srev[i].end());
    }
    arev = v[0];
    for (i = 1; i < n; ++i) {
        na = LLONG_MAX;
        narev = LLONG_MAX;
        if (s[i] >= s[i-1])
            na = min(na, a);
        if (s[i] >= srev[i-1])
            na = min(na, arev);
        if (srev[i] >= s[i-1] && a != LLONG_MAX)
            narev = min(narev, a + v[i]);
        if (srev[i] >= srev[i-1] && arev != LLONG_MAX)
            narev = min(narev, arev + v[i]);
        a = na;
        arev = narev;
    }
    res = min(a, arev);
    if (res == LLONG_MAX)
        cout << -1 << endl;
    else
        cout << res << endl;
}

