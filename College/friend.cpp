#include<iostream>
using namespace std;

class Avg {
    int a, b;
public:
    void set(int x, int y) {
        a = x;
        b = y;
    }

    friend float average(Avg obj);
};

float average(Avg obj) {
    return (obj.a + obj.b) / 2.0;
}

int main() {
    Avg obj;
    obj.set(10, 20);
    cout << "Average = " << average(obj);
}
