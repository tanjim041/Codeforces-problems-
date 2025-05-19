
#include <iostream>
#include <string>
#include <sstream>
#include <set>
using namespace std;
int main() {
    string letters_set;
    getline(cin, letters_set);
    string letters_inside_brackets = letters_set.substr(1, letters_set.size() - 2);


    if (letters_inside_brackets.empty()) {
        cout << "0" << endl;
        return 0;
    }


    stringstream ss(letters_inside_brackets);
    string letter;
    set<string> distinct_letters;

    while (getline(ss, letter, ',')) {

        size_t start = letter.find_first_not_of(' ');
        size_t end = letter.find_last_not_of(' ');
        letter = letter.substr(start, end - start + 1);

        distinct_letters.insert(letter);
    }


    cout << distinct_letters.size() << endl;

    return 0;
}
