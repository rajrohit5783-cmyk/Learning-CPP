#include<iostream>
using namespace std;

/*
 * Collects student details and marks from user.
 * Using reference parameters to modify original variables
 * without returning multiple values.
 */
void takeInput(string &name, int &m1, int &m2, int &m3)
{
    cout << "Enter Student Name: ";
    cin >> name;   

    cout << "Enter Marks 1: ";
    cin >> m1;

    cout << "Enter Marks 2: ";
    cin >> m2;

    cout << "Enter Marks 3: ";
    cin >> m3;
}

/*
 * Calculates total marks obtained in 3 subjects.
 */
int calculateTotal(int m1, int m2, int m3)
{
    return m1 + m2 + m3;
}

/*
 * Calculates percentage based on total marks.
 * Division by 3.0 ensures floating-point precision.
 */
float calculatePercentage(int total)
{
    return total / 3.0;
}

/*
 * Determines grade based on percentage.
 * Grading scale follows descending order for clarity.
 */
string calculateGrade(float percentage)
{
    if (percentage >= 90)
        return "A";
    else if (percentage >= 75)
        return "B";
    else if (percentage >= 60)
        return "C";
    else if (percentage >= 50)
        return "D";
    else
        return "Fail";
}

/*
 * Displays the final result in a structured format.
 * Keeps presentation logic separate from business logic.
 */
void displayResult(string name, int total, float percentage, string grade)
{
    cout << "\n------- Student Result --------" << endl;
    cout << "Student Name: " << name << endl;
    cout << "Total Marks: " << total << endl;
    cout << "Percentage: " << percentage << endl;
    cout << "Grade: " << grade << endl;
}

int main()
{
    // Declare variables to store student data
    string name;
    int m1, m2, m3;

    // Step 1: Take input from user
    takeInput(name, m1, m2, m3);

    // Step 2: Calculate total marks
    int total = calculateTotal(m1, m2, m3);

    // Step 3: Calculate percentage
    float percentage = calculatePercentage(total);

    // Step 4: Determine grade
    string grade = calculateGrade(percentage);

    // Step 5: Display final result
    displayResult(name, total, percentage, grade);

    return 0;
}
