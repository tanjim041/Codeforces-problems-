#include <bits/stdc++.h>
using namespace std;
typedef long long l;

int main() {
    l t, n;
    cin >> t; // Read the number of test cases
    vector<l> v(t);

    for (l i = 0; i < t; i++) {
        cin >> v[i]; // Read the coin values
    }

    for (l i = 0; i < t; i++) {
        n = v[i];
        l result = 0;
        while (n > 3) {
            result += 2; // Each division produces two coins
            n /= 4;      // Divide the current coin value by 4
        }
        result += 1; // Add the remaining single coin
        cout << result << endl; // Output the result
    }

    return 0;
}
