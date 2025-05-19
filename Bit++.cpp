#include<iostream>
#include<string>
using namespace std;

int main(void)
{
    int n, x = 0;
    cin >> n;

    while (n--)
    {
        string operation;
        cin >> operation;

        if (operation == "++X" || operation == "X++")
            x += 1;
        else if (operation == "--X" || operation == "X--")
            x -= 1;
    }

    cout << x;
    return 0;
}

