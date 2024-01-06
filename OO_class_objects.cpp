#include <iostream>
using namespace std;

class rectangle
{
    public:
    int length;
    int breadth;

    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

int main()
{
    rectangle r1, r2, r3;
    r1.length = 10, r1.breadth = 5;
    r2.length = 15, r2.breadth = 10;
    r3.length = 05, r3.breadth = 05;

    cout << "area of r1 is = " << r1.area() << endl;
    cout << "perimeter of r1 is = " << r1.perimeter() << endl;
    cout << "area of r2 is = " << r2.area() << endl;
    cout << "area of r3 is = " << r3.area() << endl;
}