#include <iostream>
using namespace std;

char toLower(const char s) {
    if (s >= 'A' && s <= 'Z') {
        return s + 32;
    }else {
        return s;
    }
}

void countChar(const char* str, int& vowelCount, int& consonantCount) {
    vowelCount = 0;
    consonantCount = 0;

    const char* p = str;

    while (*p != '\0') {
        char ch = toLower(*p);

        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a',  ch == 'e',  ch == 'i',  ch == 'o', ch == 'u') {
                vowelCount++;
            }else {
                consonantCount++;
            }
        }
        p++;
    }
}

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);
    int vowels = 0, consonants = 0;

    countChar(str, vowels, consonants);

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;

    return 0;
}