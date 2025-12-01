#include <iostream>
using namespace std;

int main() {
    int length, width;
    
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    

    int area = length * width;
    int perimeter = 2 * (length + width);
    

    cout << "Area = " << area << endl;
    cout << "Perimeter = " << perimeter << endl;
    
    return 0;
}
