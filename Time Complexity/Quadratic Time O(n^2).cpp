#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3};

    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v.size(); j++) {
            cout << "(" << v[i] << "," << v[j] << ") ";
        }
        cout << endl;
    }

    return 0;
}
