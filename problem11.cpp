#include <iostream>
#include <string>
#include <cctype> //i forgotten
using namespace std;

string count(string s) {
    int uppercount=0, lowercount=0; // i used funvtion type as int, in order to get string result we need string type function.
    for (int i=0; i<s.length(); i++) {
        if (s[i]>='a' && s[i]<='z') {
            lowercount++;
        }else if (s[i]>='A' && s[i]<='Z') {
            uppercount++;
        }
    }

    string result=""; //we should return string result not 0

    for (int i=0; i<s.length(); i++) {
        if (lowercount>=uppercount) {
            result += tolower(s[i]);
        }else {
            result += toupper(s[i]);
        }
    }
    return result; //return result as answer
}

int main() {
    string s;
    cout<<"Enter a string: ";
    cin>>s;

    string result=count(s);
    cout<<"converting string: "<<result<<endl;
    return 0;
}

