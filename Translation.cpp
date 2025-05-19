#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    int len1 = s.length();
    string rev = string(t.rbegin(), t.rend());
    if (s == rev) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
