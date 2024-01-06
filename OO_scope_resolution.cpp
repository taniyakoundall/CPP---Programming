#include<iostream>
using namespace std;

class Rectangle
{
    private:
    int length;
    int breadth;

    public:

    int setLength(int l)
    {
        length=l;
    }
    int setBreadth(int b)
    {
        breadth=b;
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }


    int area()
    {
        return length*breadth;
    }
    int perimeter();

};

int Rectangle :: perimeter()
    {
        return 2*(length+breadth);
    }


int main()
{
    Rectangle r;
    r.setLength(10);
    r.setBreadth(5);
    cout<<r.area()<<endl;
    cout<<r.perimeter()<<endl;

    return 0;
}