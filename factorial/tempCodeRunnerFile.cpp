#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number : ";
    cin >> num;
    int fact = 1 ;
    for (int i = 1; i <= num; i++){
        fact *= i;
    }
    cout << "factorial is: " << fact << endl;
    return 0;
}