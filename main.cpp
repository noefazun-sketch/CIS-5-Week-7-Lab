#include <iostream>
using namespace std;

// Lab 7 - Noe Zuniga
// CIS 5 Week 07 - Two arrays

int main() {

    const int N = 5;

    int quiz[N] = {88, 92, 75, 84, 95};
    int lab[N] = {90, 85, 100, 78, 93};

    int sum = 0;
    int hi = quiz[0];

    cout << "Quiz Array" << endl;

    for (int i = 0; i < N; ++i) {
        cout << "[" << i << "] " << quiz[i] << endl;
        sum += quiz[i];

        if (quiz[i] > hi) {
            hi = quiz[i];
        }
    }

    cout << "Sum: " << sum << endl;
    cout << "High: " << hi << endl;

    sum = 0;
    hi = lab[0];

    cout << endl;
    cout << "Lab Array" << endl;

    for (int i = 0; i < N; ++i) {
        cout << "[" << i << "] " << lab[i] << endl;
        sum += lab[i];

        if (lab[i] > hi) {
            hi = lab[i];
        }
    }

    cout << "Sum: " << sum << endl;
    cout << "High: " << hi << endl;

    return 0;
}