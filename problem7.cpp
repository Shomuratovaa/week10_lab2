#include <iostream>
#include <string>
using namespace std;

int AuthenticCharacters(const string& s) {
    bool seen[26] = {false};
    int count = 0;

    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];
        if (ch >= 'A' && ch <= 'Z') {
            int index = ch - 'A';
            if (!seen[index]) {
                seen[index] = true;
                count++;
            }
        }
    }
    return count;
}

int main() {
    string s;
    cout << "Enter a string (only uppercase letters): ";
    cin >> s;

    int result = AuthenticCharacters(s);
    cout << "Number of authentic characters: " << result << endl;

    return 0;
}
