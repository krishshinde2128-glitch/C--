#include <iostream>
using namespace std;

class book{
    public:
        int book_id;
        string title;
        void display(){
            cout << "Book ID: " << book_id << endl;
            cout << "Title: " << title << endl;
        }
};

int main(){
    book b1;
    b1.book_id = 1;
    b1.title = "C++ Programming";
    b1.display();
    return 0;
}