#include<iostream>
using namespace std;

class Rect
{
public:          
    float l;
    float b;

    double perm() {
        return 2 * (l + b);
    }
};

int main() {
    Rect R1,R2,R3;
    R1.l = 50;
    R1.b = 10.2;

    cout << R1.perm() << endl;

    return 0;
}
