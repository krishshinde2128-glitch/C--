#include <iostream>
using namespace std;

class which{
    public:
        string str;
            void how (){
                cout<<"enter which sport: ";
                cin>> str;
            }
};

class Sports{
public:
    int score;
        void mark (){
            cout<<"whats the score: ";
            cin>>score;
        }
};

class acadimics{
    public:
        int marks; 
            void show(){
                cout << "enter marks: ";
                cin >> marks;
            }
};

class student : public which, public Sports, public acadimics{
    public:
        void total(){
            cout<<"total = " << score + marks << endl;
        }
};

int main(){
    student s;
    s.how();
    s.mark();
    s.show();
    s.total();
    return 0; 
}