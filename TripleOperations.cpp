#include <iostream>
#include <algorithm>
using namespace std;

int minOperations(long long n) {
    int operations = 0;
    while (n > 0) {
        if (n % 3 == 0) {
            n /= 3;
        } else {
            n--;  // Reduce to a multiple of 3
        }
        operations++;
    }
    return operations;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long l, r;
        cin >> l >> r;

        // The answer is the number of operations to reduce `r` to 0
        cout << minOperations(r) << '\n';
    }
    return 0;
}

