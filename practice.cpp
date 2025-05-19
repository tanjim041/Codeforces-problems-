
#include <bits/stdc++.h>
using namespace std;

// Function to sort the array using Bubble Sort
void sortarray(vector<int>& v, int n) {
    int temp;
    for (int j = 0; j < n; j++)
        for (int i = 0; i < n - j - 1; i++)
            if (v[i + 1] < v[i]) {
                temp = v[i];
                v[i] = v[i + 1];
                v[i + 1] = temp;
            }
}

// Function to perform Binary Search
int binary_Search(vector<int>& v, int tar) {
    int mid, st = 0;
    int en = v.size() - 1;
    while (st <= en) {
        mid = st + (en - st) / 2;
        if (v[mid] == tar) {
            return mid;
        }
        if (v[mid] < tar)
            st = mid + 1;
        else
            en = mid - 1;
    }
    return -1;
}

// Function to manually insert an element into a sorted vector
void manualInsertion(vector<int>& v, int t, int& n) {
    int pos = 0;

    // Find the correct position for the element
    while (pos < n && v[pos] < t) {
        pos++;
    }

    // Shift elements to the right to make space for the new element
    v.push_back(0); // Increase the size by 1
    for (int i = n; i > pos; i--) {
        v[i] = v[i - 1];
    }

    // Insert the element at the correct position
    v[pos] = t;
    n++; // Update the size

    // Output the updated sorted vector
    cout << "Value " << t << " not found. After insertion, sorted vector: ";
    for (int j = 0; j < n; j++) {
        cout << v[j] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v;
    int n, x, t;

    // Input size of the array
    cin >> n;

    // Input elements of the array
    for (int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }

    // Sort the array
    sortarray(v, n);

    // Input the target value
    cin >> t;

    // Perform Binary Search
    int result = binary_Search(v, t);

    // If target is found
    if (result != -1) {
        cout << "Sorted vector: ";
        for (int i = 0; i < n; i++) {
            cout << v[i] << " ";
        }
        cout << "\n";
        cout << "Value " << t << " found at index: " << result << endl;
    }
    // If target is not found
    else {
        manualInsertion(v, t, n);
    }

    return 0;
}
