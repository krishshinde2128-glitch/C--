#include <iostream>
using namespace std;

int main(){
    int a[2][3];
    cout << "enter elements of 2D array: ";
    for(int i = 0; i<2; i++){
        for(int j = 0; j<3; j++){
            cin >> a[i][j];
        }
    }
    cout << "2D array elements are: " << endl;
    for(int i = 0; i<2; i++){
        for(int j = 0; j<3; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}