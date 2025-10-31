#include <iostream>
using namespace std;

void reversestring(char s[], int n) {
    int start = 0;
    int end = n-1;

    while (start < end) {
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }
}
 int main () {
    char s[100];
    cout<<"Enter a string:";
    cin>>s;

    int length = 0;
    while (s[length]!= '\0') {
        length ++;
    }
    reversestring(s, length);

    cout<<"Reverse strring:"<<s<<endl;
    return 0;
}