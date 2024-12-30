#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Shape {
    public:
    virtual ~Shape(){} //Virtual destructor
    virtual void draw(){
        cout<<"Drawing a generic shape"<<endl;
    }
};

class Circle: public Shape{
    public:
    void draw() override{
        cout<<"Drawing a circle"<<endl;
    }

};

class Square:public Shape{
    public:
    void draw() override{
        cout<<"Drawing a square"<<endl;
    }
};

int main(){
    Shape* shape1=new Circle();
    Shape* shape2=new Square();

    Shape shape3;
    Circle shape4;
    Square shape5;

    shape1->draw();
    shape2->draw();

    delete shape1;
    delete shape2;

    shape3.draw();
    shape4.draw();
    shape5.draw();

    return 0;
}