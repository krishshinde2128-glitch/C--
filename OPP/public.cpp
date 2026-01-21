#include <iostream>
using namespace std;

class student {
    public:
        int rollno;
        string name;
        void display(){
            cout << "Roll No: " << rollno << endl;
            cout << "Name: " << name << endl;
        }
};

int main(){
    student s1;
    s1.rollno = 101;
    s1.name = "krish";
    s1.display();
    return 0;
}

