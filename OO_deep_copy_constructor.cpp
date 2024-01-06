#include<iostream>
using namespace std;

class Rectangle
{
    private:
    int length,breadth;

    public:
    Rectangle()
    {
        length=1;
        breadth=1;
    }
     Rectangle(int l, int b)
    {
        setLength(l);
        setBreadth(b);
    }

    int setLength(int l)
    {
        if(l>=0)
        length=l;
        else
        //cout<<"length cannot be negative so it is assumed to be zero "<<endl;
        length=1;
    }
    int setBreadth(int b)
    {
        if(b>=0)
        breadth=b;
        else
        //cout<<"breadth cannot be negative so it is assumed to be zero "<<endl;
        breadth=1;
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
    int perimeter()
    {
        return 2*(length +breadth);
    }
};

int main()
{
    Rectangle r1;

    r1.setLength(10);
    r1.setBreadth(5);

    cout<<r1.area()<<endl;
    cout<<r1.perimeter()<<endl;

    return 0;
}