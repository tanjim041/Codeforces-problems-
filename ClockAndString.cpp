#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t; // Input number of test cases

    for (int i = 0; i < t; ++i) {
        int a, b, c, d;
        cin >> a >> b >> c >> d; // Input four integers

        // Calculate clockwise distance between two points on the clock
        int diff1 = (b - a + 12) % 12;
        int diff2 = (d - c + 12) % 12;

        // Check if absolute differences between pairs exceed 6
        if (abs(diff1 - diff2) > 6) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}


