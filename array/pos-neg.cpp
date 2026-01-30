#include <iostream>
using namespace std;

int main(){
    const int size = 6;
    int arr[size];
    cout << "enter 6 numbers: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    int pos = 0 , neg =0;

    for (int i = 0; i < size; i++){
        if (arr[i] >= 0)
            pos++;
        else
            neg++;
    }

    cout << "positive numbers are: " << pos << endl;
    cout << "negative numbers are: " << neg << endl;
    return 0;

}