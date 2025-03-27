#include <vector>
#include <string>
#include <iostream>

using namespace std;

vector<string> fizzBuzz(int n) {
    vector<string> result;
    for (int i = 1; i <= n; i++) {
        if (i % 15 == 0) {
            result.push_back("FizzBuzz");
        } else if (i % 3 == 0) {
            result.push_back("Fizz");
        } else if (i % 5 == 0) {
            result.push_back("Buzz");
        } else {
            result.push_back(to_string(i));
        }
    }
    return result;
}

int main() {
    vector<string> output = fizzBuzz(15);
    for (const string& s : output) {
        cout << s << " ";
    }
    return 0;
}