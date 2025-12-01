#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of subjects: ";
    cin >> n;

    int highest, lowest;

    cout << "Enter marks of subject 1: ";
    int mark;
    cin >> mark;

    highest = mark;
    lowest = mark;

    for (int i = 2; i <= n; i++) {
        cout << "Enter marks of subject " << i << ": ";
        cin >> mark;

        if (mark > highest)
            highest = mark;
        if (mark < lowest)
            lowest = mark;
    }

    cout << "Highest = " << highest << endl;
    cout << "Lowest = " << lowest << endl;

    return 0;
}