#include <iostream>

using namespace std;

class A{
    public:
    int a;

    A(int a){
        //assigning a of this object to function argument a
        this->a=a;
    }

    void display(){
        //Accessing a of this object
        cout<<"Value: "<<this->a<<endl;
    }
};


int main(){
    //A obj;
    //obj.a=5;
    //cout<<obj.a<<endl;

    A o(10);
    o.display();
    return 0;
}
