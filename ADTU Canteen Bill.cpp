#include <iostream>
using namespace std;

int main() {
    int n, m;

    cout << " Welcome to ADTU Canteen Bill Analyzer\n";
    cout << "------------------------------------------\n\n";

    cout << "Enter the number of students: ";
    cin >> n;
    cout << "Enter the number of days: ";
    cin >> m;

   
    int bill[100][100];       
    int studentTotal[100] = {0};
    int dayTotal[100] = {0};

    cout << "\nNow, please enter the daily canteen expenses for each student.\n";
    cout << "------------------------------------------\n";

    for (int i = 0; i < n; i++) {
        cout << "Enter details for Student " << i + 1 << ":\n";
        for (int j = 0; j < m; j++) {
            cout << "Day " << j + 1 << " : Rs";
            cin >> bill[i][j];
        }
    }

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            studentTotal[i] += bill[i][j];
            dayTotal[j] += bill[i][j];
        }
    }

    cout << "\n------------------------------------------\n";
    cout << " Weekly Canteen Summary\n";
    cout << "------------------------------------------\n\n";

    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1 << " total: Rs" << studentTotal[i] << endl;
    }
    cout << endl;


    int maxDayTotal = dayTotal[0];
    int bestDay = 0;
    for (int j = 1; j < m; j++) {
        if (dayTotal[j] > maxDayTotal) {
            maxDayTotal = dayTotal[j];
            bestDay = j;
        }
    }
    cout << " Highest collection on Day " << bestDay + 1
         << " (Rs" << maxDayTotal << ")\n";

    int maxSpent = studentTotal[0];
    for (int i = 1; i < n; i++) {
        if (studentTotal[i] > maxSpent) {
            maxSpent = studentTotal[i];
        }
    }

    cout << " Highest spender: ";
    bool first = true;
    for (int i = 0; i < n; i++) {
        if (studentTotal[i] == maxSpent) {
            if (!first) cout << " and ";
            cout << "Student " << i + 1;
            first = false;
        }
    }
    cout << " (Rs" << maxSpent << ")\n";

    cout << "\nThank you for using ADTU Canteen Bill Analyzer! \n";
    cout << "------------------------------------------\n";

    return 0;
}