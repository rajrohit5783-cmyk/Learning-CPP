#include <iostream>
using namespace std;

int main() {
    int n, a[50], even = 0, odd = 0;

    cout << "Enter size: ";
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        (a[i] % 2 == 0) ? even++ : odd++;

    cout << "Even = " << even << "\nOdd = " << odd;
    return 0;
}
