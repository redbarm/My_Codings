#include <iostream>

using namespace std;

class MyClass {
    public:
    //Constructor
    int x;
    MyClass(int val):x(val){
        std::cout<<"Constructor called"<<endl;
    }

    //Destructor
    ~MyClass(){
        cout<<"Destructor is called"<<endl;
    }
};

int main(){
    MyClass obj(5); //Constructor is called 
    int i=0;
    do{
        cout<<obj.x<<endl;
        i++;
    }while(i<10);

    //Destructor is called when obj goes out of scope
    return 0;
}