#include <iostream>
using namespace std;

bool anagram(string s, string t) {
    if (s.length() != t.length()){
        return false;
    }

    int count[26] = {0};

    for (int i=0; i<26; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for (int i=0; i<26; i++) {
        if (count[i] != 0) {
            return false;
        }
    }

    return true;
}

int main () {
    string text1,text2;
    cout<<"Enter the first string:";
    cin>>text1;
    cout<<"Enter the second string:";
    cin>>text2;

    bool res = anagram(text1,text2);
    if (res==true) {
        cout<<"TRUE"<<endl;
    }else{
        cout<<"FALSE"<<endl;
    }
    return 0;
}