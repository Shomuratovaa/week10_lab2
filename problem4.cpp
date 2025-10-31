#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(char s[]) {
    int n = strlen(s);

    for (int i = 0; i < n; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32;
        }
    }

    int start = 0;
    int end = n - 1;


    while (start < end) {
        if (s[start] != s[end]) {
            return false;
        }
        start++;
        end--;
    }

    return true;
}

int main() {
    char s[100];
    cout << "Enter a word: ";
    cin >> s;

    if (isPalindrome(s))
        cout << "True " << endl;
    else
        cout << "False " << endl;

    return 0;
}
