#include <iostream>
using namespace std;
int main() {
  int marks;
  cin >> marks;
  if(marks < 0 || marks > 100) {
    cout << "Enter valid marks i.e. between (0-100)";
  }
  else if(marks < 25){
    cout << "Grade: F";
  }
  else if (marks <= 44) {
    cout << "Grade: E";
  }
  else if (marks <= 49) {
    cout << "Grade: D";
  }
  else if (marks <= 59) {
    cout << "Grade: C";
  }
  else if (marks <= 79) {
    cout << "Grade: B";
  }
  else {
    cout << "Grade: A";
  }

  return 0;
}
