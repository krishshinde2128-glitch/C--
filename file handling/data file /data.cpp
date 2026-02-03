
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("data.txt");
    string word,search;
    bool found = false;

    cout << "Enter word to search:";
    cin >> search;

    while (file >> word) {
        if(word == search ) {
            found = true;
            break;
        }
    }
    file.close();
    if(found)

    cout << "Word found";
    else
    cout << "Word not found";
    return 0;
}