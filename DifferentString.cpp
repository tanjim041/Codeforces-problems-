#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int transitions = 0;
        char prev = s[0]; // Initialize prev with the first character

        for (int i = 1; i < s.size(); ++i) {
            if (s[i] != prev) {
                transitions++;
                prev = s[i];
            }
        }

        cout << transitions + 1 << endl;
    }

    return 0;
}

