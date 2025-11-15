#include <iostream>
#include <cstring>
using namespace std;

int value(char r) {
    switch (r) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}
int romantoint(string s) {
    int total=0;

    for (int i=0; i<s.length(); i++) {
        int v1 = value(s[i]);

        if (i+1 < s.length()) {
            int v2 = value(s[i+1]);

            if (v1<v2) {
                total += (v2-v1);
                i++;
            }else {
                total += v1;
            }
        }else {
            total += v1;
        }
    }
    return total;
}
int main() {
    string s;
    cout<<"Enter roman string: ";
    cin>>s;

    cout<<romantoint(s)<<endl;
    return 0;
}