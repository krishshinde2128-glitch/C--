#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    char alphabet = 'A';

    for (int i = 1; i <= rows; ++i) { 
        for (int j = 1; j <= i; ++j) { 
            cout << alphabet << " ";
        }
        ++alphabet; 
        cout << endl; 
    }

    return 0;
}