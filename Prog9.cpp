// Problem 9: University Attendance Analysis.
// 1. Count students below a given attendance threshold.
// 2. Find the student with the lowest attendance and position.
// 3. Calculate average attendance.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double attendance[100];
    int n;
    double threshold;

    cout << "Enter number of students: ";
    cin >> n;

    cout << "Enter attendance percentages:\n";
    for (int i = 0; i < n; i++) {
        cin >> attendance[i];
    }

    cout << "Enter attendance threshold: ";
    cin >> threshold;

    int belowThreshold = 0;
    int lowestPosition = 0;

    double sum = 0;

    for (int i = 0; i < n; i++) {
        if (attendance[i] < threshold) {
            belowThreshold++;
        }

        if (attendance[i] < attendance[lowestPosition]) {
            lowestPosition = i;
        }

        sum += attendance[i];
    }

    double average = sum / n;

    cout << "\nStudents below threshold = " << belowThreshold << endl;
    cout << "Lowest attendance = " << attendance[lowestPosition]
         << "% at position " << lowestPosition + 1 << endl;
    cout << fixed << setprecision(2);
    cout << "Average attendance = " << average << "%" << endl;

    return 0;
}
