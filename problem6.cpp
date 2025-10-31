#include <iostream>
using namespace std;

void count(const char s[], int counts[]) {
    for (int i=0; i<26; i++) {
        counts[i] = 0;
    }
    for (int i=0; i<strlen(s); i++) {
        char ch = s[i];

        if (ch>='A' && ch<='Z') {
        ch = ch +32;
        }
        if (ch>='a' && ch<='z') {
            counts[ch-'a']++;
        }
    }
}
int main() {
    char s[1000];
    int counts[26];

    cout<<"Enter a string:";
    cin.getline(s, 1000) ;
    count(s,counts);

    cout<<" Letter frequencies: "<<endl;
    for (int i=0; i<26; i++) {
        if (counts[i]>0) {
            cout<<char('a'+i)<<":"<<counts[i]<<endl;
        }
    }

    return 0;
}
