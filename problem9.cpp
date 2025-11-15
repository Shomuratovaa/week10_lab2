#include <iostream>
using namespace std;

int main() {
    int x=0;
    int n;
    cout<<"Enter number of operations: ";
    cin>>n;

    for (int i=0; i<n; i++) {
        string operation;
        cout<<"Enter operation "<<i+1<<": ";
        cin>>operation;

        if (operation=="++x" || operation=="x++" ) {
            x++;
        }else if (operation=="--x" || operation=="x--") {
            x--;
        }
    }
    cout<<"Final answer: "<<x<<endl;
    return 0;
}