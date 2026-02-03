#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ofstream fout("student.txt", ios::app);
    fout << "Roll:1\n";
    fout << "Name: Rahul\n";
    fout << "Marks: 85\n";

    fout.close();
    cout << "Student data saved";
    return 0;
}