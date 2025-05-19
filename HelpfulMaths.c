
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string sum;
    cin >> sum;

    int count[4] = {0}; // Array to store the count of each digit (1, 2, and 3)

    // Count the occurrences of each digit
    for (char c : sum) {
        if (c != '+') {
            count[c - '0']++;
        }
    }

    string newSum;

    // Construct the new sum in non-decreasing order
    for (int i = 1; i <= 3; i++) {
        for (int j = 0; j < count[i]; j++) {
            newSum += to_string(i) + "+";
        }
    }

    // Remove the trailing '+' character
    newSum.pop_back();

    cout << newSum << endl;

    return 0;
}
