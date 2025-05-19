#include <iostream>

class MyClass {
public:
    static int count; // Declaration of static data member
    static int shared;

    MyClass() {
        count++; // Increment count when an object is created
    }

    static void incrementCount() { // Static member function
        count++;
    }
};

int MyClass::count = 0; // Definition and initialization of static data member
int MyClass::shared=99; // Definition and initialization of static data member

int main() {
    MyClass obj1;
    MyClass obj2;
    MyClass obj3;

    //std::cout << MyClass::count << std::endl; // Accessing static member using class name
    //std::cout << obj3.count << std::endl; // Accessing static member using class name

    //MyClass::incrementCount(); // Calling static member function using class name
    //MyClass::incrementCount();

    //std::cout << MyClass::count << std::endl;
    std::cout << obj1.count << std::endl;

    std::cout << "obj1 shared: " << obj1.shared << std::endl;
    std::cout << "obj2 shared: " << obj2.shared << std::endl;
    std::cout << "obj3 shared: " << obj3.shared << std::endl;

    return 0;
}