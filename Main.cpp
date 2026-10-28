
#include <iostream>
#include <string>
using namespace std;

int main() {
    string studentName;
    double marks;
    char grade;

    // Prompt the user for details
    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter exam marks (0 - 100): ";
    cin >> marks;

    // Validate the marks
    if (marks < 0 || marks > 100) {
        cout << "Invalid marks! Please enter a value between 0 and 100." << endl;
        return 1;
    }

    // if-else ladder to assign the grade
    if (marks >= 70) {
        grade = 'A';
    } else if (marks >= 60) {
        grade = 'B';
    } else if (marks >= 50) {
        grade = 'C';
    } else if (marks >= 40) {
        grade = 'D';
    } else {
        grade = 'E';
    }

    // Display the result
    cout << "\n===== STUDENT RESULT =====" << endl;
    cout << "Student Name : " << studentName << endl;
    cout << "Marks        : " << marks << endl;
    cout << "Grade        : " << grade << endl;
    cout << "==========================" << endl;

    return 0;
}
