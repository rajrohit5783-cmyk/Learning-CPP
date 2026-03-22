#include <iostream>
using namespace std;

int main() {
    int row, column;

    cout << "Enter number of rows: ";
    cin >> row;
    cout << "Enter number of columns: ";
    cin >> column;

    int A[10][10], B[10][10], sum[10][10];

    
    cout << "Enter elements of Matrix A:\n";
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column; j++) {
            cin >> A[i][j];
        }
    }

    
    cout << "Enter elements of Matrix B:\n";
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column; j++) {
            cin >> B[i][j];
        }
    }

    
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column; j++) {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    
    cout << "\nSum of Matrix A and B is:\n";
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}