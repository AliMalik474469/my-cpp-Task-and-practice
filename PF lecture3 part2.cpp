
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    // Make number odd if it's even
    if (num % 2 == 0) {
        num += 1;
    }

    // Print first 10 odd numbers
    for (int i = 0; i < 10; i++) {
        cout << num << " ";
        num += 2;
    }

    return 0;
    }