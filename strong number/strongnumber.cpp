#include <iostream>
using namespace std;

int main() {
    int num, temp, digit, sum = 0, fact;

    cout << "Enter a number: ";
    cin >> num;
    temp = num;
    while (temp > 0) {
        digit = num % 10;  

         fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact = fact * i;
        }

        sum = sum + fact; 
        num = num / 10;    
    }

    if (sum == temp) {
        cout << "Strong Number";
    } else {
        cout << "Not a Strong Number";
    }

    return 0;
}