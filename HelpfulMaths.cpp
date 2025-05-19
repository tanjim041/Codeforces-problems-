#include<iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string sum;
    cin >> sum;
    int count[4] = {0};
    for (char c : sum)
     {
        if (c != '+')
            {
            count[c - '0']++;
        }
    }
    string newSum;
    for (int i = 1; i <= 3; i++)
        {
        for (int j = 0; j < count[i]; j++)
         {
            newSum += to_string(i) + "+";
        }
    }
    newSum.pop_back();
    cout << newSum << endl;
}
