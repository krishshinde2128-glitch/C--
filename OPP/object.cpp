#include <iostream>
using namespace std;

class Car {
public:
    void run() {
        cout << "Car is running";
    }
};

int main() {
    Car c1;
    c1.run();
    return 0;
}