#include <iostream>
#include <vector>
#include <string>

using namespace std;

class PolyFunc{
    public:
    //Function with 1 int parameter
    void func(int x){
        cout<<"value of x: "<<x<<endl;
    }

    //Same Function but different type with 1 but double parameter
    int func(double x){
        cout<<"value of x: "<<x<<endl;
        return 0;
    }

    //Same function different type with 2 parameters
    double func(double x, double y){
        cout<<"value of x+y: "<<x+y<<endl;
    }
};

int main(){
    PolyFunc obj;
    obj.func(7);
    obj.func(7.99);
    obj.func(7.99,8.99);
}
