#include <iostream>
#include "calculator.h"

using namespace std;

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Sum: " << add(x, y) << endl;
    cout << "Difference: " << subtract(x, y) << endl;

    return 0;
}

