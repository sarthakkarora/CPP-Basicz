#include <iostream>
using namespace std;
char getGrade(int marks) {
    if (marks < 25) return 'F';
    else if (marks <= 44) return 'E';
    else if (marks <= 49) return 'D';
    else if (marks <= 59) return 'C';
    else if (marks <= 79) return 'B';
    else return 'A';
}

int main() {
    int marks;
    cout << "Enter marks (0-100): ";
    cin >> marks;

    if (marks < 0 || marks > 100) {
        cout << "Invalid input! Marks should be between 0 and 100.\n";
        return 1;
    }

    cout << "Your grade is: " << getGrade(marks) << endl;
    return 0;
}
