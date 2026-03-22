#include<iostream>
using namespace std;

int main()
{
    string customerName;
    int units;
    float bill = 0;   

    cout << "Enter Customer Name: ";
    cin >> customerName;

    cout << "Enter Units Consumed: ";
    cin >> units;

    if(units <= 100)
    {
        bill = units * 1.5;
    }
    else if(units <= 200)
    {
        bill = (100 * 1.5) + (units - 100) * 2.5;
    }
    else if(units <= 300)
    {
        bill = (100 * 1.5) + (100 * 2.5) + (units - 200) * 4;
    }
    else
    {
        bill = (100 * 1.5) + (100 * 2.5) + (100 * 4) + (units - 300) * 5;
    }

    cout << "\n----- Electricity Bill -----" << endl;
    cout << "Customer Name: " << customerName << endl;
    cout << "Units Consumed: " << units << endl;
    cout << "Total Bill: " << bill << endl;

    return 0;
}
