// Problem 4: Select K students eligible for scholarships.
// Eligibility:
// A) CGPA >= 8.5
// B) Family income <= 3 lakhs

#include <iostream>
#include <string>
using namespace std;

struct Student {
    int id;
    double cgpa;
    double familyIncome;
};

int main() {
    int n, k;

    cout << "Enter number of students: ";
    cin >> n;

    cout << "Enter number of scholarships (K): ";
    cin >> k;

    Student students[100];

    cout << "Enter student ID, CGPA and family income (in lakhs):\n";

    for (int i = 0; i < n; i++) {
        cin >> students[i].id
            >> students[i].cgpa
            >> students[i].familyIncome;
    }

    int count = 0;

    cout << "\nEligible students:\n";

    for (int i = 0; i < n && count < k; i++) {
        if (students[i].cgpa >= 8.5 &&
            students[i].familyIncome <= 3.0) {

            cout << "Student ID: " << students[i].id
                 << ", CGPA: " << students[i].cgpa
                 << ", Family Income: " << students[i].familyIncome
                 << " lakhs" << endl;

            count++;
        }
    }

    if (count == 0) {
        cout << "No eligible students found." << endl;
    } else if (count < k) {
        cout << "Only " << count
             << " eligible students are available." << endl;
    }

    return 0;
}
