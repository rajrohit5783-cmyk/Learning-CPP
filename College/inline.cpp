#include <iostream>
using namespace std;


inline int add(int a, int b) {
    return a + b;
}

inline int maxNum(int a, int b) {
    return (a > b) ? a : b;
}

inline int cube(int n) {
    return n * n * n;
}

int main() {
    int x = 4, y = 7;

    cout << "Addition = " << add(x, y) << endl;
    cout << "Maximum = " << maxNum(x, y) << endl;
    cout << "Cube of x = " << cube(x) << endl;

    return 0;
}
