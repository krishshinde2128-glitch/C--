#include <iostream>
using namespace std;

int main (){
    const int size = 6;
    int arr[size];
    cout << "enter 6 numbers: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    
    cout << "even numbers are: ";
    for(int i = 0; i < 6; i++){
        if (arr[i] % 2 == 0)
            cout << arr[i]<< " ";
    }

    cout <<"\nodd numbers are: ";
    for(int i = 0; i < 6; i++){
        if (arr[i] % 2 != 0 )
            cout << arr[i]<< " ";
}
    return 0;
}