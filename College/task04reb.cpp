#include<iostream>
using namespace std;

/*
 * Collects customer details required for bill generation.
 * Uses reference parameters to directly update caller variables
 * instead of returning multiple values.
 */
void takeInput(string &customerName, int &units){
    cout << "Enter Customer Name: ";
    cin >> customerName;   // Note: accepts single-word names only

    cout << "Enter units consumed: ";
    cin >> units;
}

/*
 * Calculates electricity bill based on slab rates.
 * Slab system ensures progressive billing:
 * Higher consumption leads to higher per-unit charges.
 */
int calculateBill(int units) {
    int bill;

    if(units <= 100){
        bill = units * 1.5;
    }
    else if(units <= 200){
        bill = (100 * 1.5) + (units - 100) * 2.5;
    }
    else if(units <= 300){
        bill = (100 * 1.5) + (100 * 2.5) + (units - 200) * 4;
    }
    else{
        bill = (100 * 1.5) + (100 * 2.5) + (100 * 4) + (units - 300) * 5;
    }

    return bill;
}

/*
 * Displays final bill details.
 * Keeps presentation logic separate from calculation logic.
 */
void displayResult(string customerName, int units, int bill){
    cout << "\n------ BILL Details ------" << endl;
    cout << "Customer Name: " << customerName << endl;
    cout << "Units Consumed: " << units << endl;
    cout << "Total Bill: " << bill << endl;
}

int main(){
    // Variables to store user input and computed bill
    string name;
    int units, bill;

    // Step 1: Take input
    takeInput(name, units);

    // Step 2: Compute bill based on slab system
    bill = calculateBill(units);

    // Step 3: Display result
    displayResult(name, units, bill);

    return 0;
}
