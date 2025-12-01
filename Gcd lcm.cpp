#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter the first length: ";
    cin >> a;
    cout << "Enter the second length: ";
    cin >> b;

    int x = a, y = b;
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    int gcd = x;

    int lcm = (a * b) / gcd;
    cout << "GCD = " << gcd << endl;
    cout << "LCM = " << lcm << endl;

    return 0;
}