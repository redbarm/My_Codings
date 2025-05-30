#include <iostream>
//Dynamic Memory Management Library
#include <memory>

using namespace std;
class Rectangle {
    int length;
    int breadth;

public:
    Rectangle(int l,int b){
        length=l;
        breadth=b;
    }
    int area() {return length*breadth;}
};

int main()
{
    //Smart Pointer
    unique_ptr<Rectangle> P1(new Rectangle(10,5));
    cout<<P1->area()<<endl;//This will print 50

    //unique_ptr<Rectangle>P2(P1);
    unique_ptr<Rectangle> P2;
    P2=move(P1);

    //This will print 50
    cout<<P2->area()<<endl;
    return 0;
}