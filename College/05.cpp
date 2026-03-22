#include<iostream>
using namespace std;

class Tri
{
public:          
    float b;
    float h;

    double area() {
        return 0.5 * b * h ;
    }
};

int main() {
    Tri T1,T2,T3;
    T1.b = 50;
    T1.h = 10;


    T2.b = 40;
    T2.h = 16;


    cout << T1.area() << endl;
    cout << T2.area() << endl;
    
    return 0;
}
