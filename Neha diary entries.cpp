#include <iostream>
using namespace std;

int main() {
    int n;

    
    cout << "Enter number of days: ";
    cin >> n;

    int arr[n];

    
    for (int i = 0; i < n; i++) {
        cout << "Enter time for day " << (i + 1) << ": ";
        cin >> arr[i];
    }

    
    cout << "Reversed exercise times: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}