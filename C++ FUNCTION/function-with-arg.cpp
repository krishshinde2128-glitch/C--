#include <iostream>
using namespace std;

int factorial(){
int num;
    cout << "Enter a number : ";
    cin >> num;
    int fact = 1 ;
    for (int i = 1; i <= num; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    cout << "factorial is: " << factorial() << endl;
    return 0;
}   