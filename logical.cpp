#include <iostream>
using namespace std;

int main() {
    int age,marks;
    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your marks: ";
    cin >> marks;

    /*Logical AND (&&)
    boht conditions are true. */
    if (age >= 18 && marks >= 40) {
        cout << "result using AND (&&): Eligible and passed." << endl;
    } 
    else {
        cout << "Result using AND (&&): Not eligible or failed." << endl;
    }
    /*Logical OR (||)
    at least one condition is true. */
    if (age >= 18 || marks >= 40) {
        cout << "result using OR (||): Eligible or passed." << endl;
    }
    else {
        cout << "Result using OR (||): Not eligible and failed." << endl;
    }
    /*Logical NOT (!) operator*/
    if (!(age >= 18 && marks >= 40)) {
        cout << "Result using NOT (!): Not eligible and failed." << endl;
    }
    else {
        cout << "Result using NOT (!): Eligible and passed." << endl;
    }
}    