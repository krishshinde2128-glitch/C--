#include <iostream>
using namespace std;

int main(){

    int arr[5] = {10 , 20, 30, 40, 50};
    int key;
    cout << "enter the element to search: ";
    cin >> key;
    int found = 0;


    for (int i = 0; i < 5 ; i++){
        if (arr[i] == key){
            found = 1;
            cout << "element found at index " << i << endl;
            break;
        }
    }
    
    if(found == 0)
        cout << "element not found" << endl;
    else
        cout << "search complete" << endl;
    

    return 0;
}