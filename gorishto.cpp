#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    vector<int> h(n);
    for (int i = 0; i < n; ++i) cin >> h[i];
    priority_queue<int, vector<int>, greater<int>> minHeap(h.begin(), h.end());
    priority_queue<int> maxHeap(h.begin(), h.end());
    for (int i = 0; i < k; ++i) {
        if (minHeap.size() >= 2) {
            int min1 = minHeap.top(); minHeap.pop();
            int min2 = minHeap.top(); minHeap.pop();
        } else {
            int maxVal = maxHeap.top(); maxHeap.pop();
        }
    }
    long long totalRemaining = 0;
    while (!minHeap.empty()) {
        totalRemaining += minHeap.top();
        minHeap.pop();
    }
    cout << totalRemaining << endl;
    return 0;
}
