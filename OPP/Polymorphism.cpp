#include <iostream>
using namespace std;
class add{
    public:
        int sum(int a , int b){
            return a+b;
        }
        float sum(float a , float b){
            return a+b;
        }
};

int main(){
    add obj;
    cout<<obj.sum(2,3)<<endl;
    cout<<obj.sum(2.5f, 3.5f)<<endl;
    return 0;
}