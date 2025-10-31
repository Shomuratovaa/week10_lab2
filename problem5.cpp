#include <iostream>
#include <string>
using namespace std;

int count(const string& s, char a) {
    int counter = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == a) {
            counter++;
        }
    }
    return counter;
}

int main() {
    string s;
    char ch;

    cout << "Enter a string: ";
    cin >> s;

    cout << "Enter a character to count: ";
    cin >> ch;

    int result = count(s, ch);

    cout << result<<" times";

    return 0;
}
