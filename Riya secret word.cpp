#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int len = s.length();
    bool isPalindrome = true;

    for(int i = 0; i < len / 2; i++) {
        if(s[i] != s[len - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    if(isPalindrome)
        cout << "Perfect Secret Word";
    else
        cout << "Not a Secret Word";

    return 0;
}
