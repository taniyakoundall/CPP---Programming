#include<iostream>
using namespace std;

class shape
{
    public:
    virtual float area()=0;
    virtual float perimeter()=0;
};

class rectangle:public shape
{
    private:
    float length;
    float breadth;

    public:
    rectangle(float l=1,float b=1)
    {
        length=l;
        breadth=b;
    }

    float area()
    {
        return length*breadth;
    }
    float perimeter()
    {
        return 2*(length*breadth);
    }
};

class circle:public shape
{
    private:
    float radius;

    public:
    circle(float r=1)
    {
        radius=r;
    }

    float area()
    {
        return 3.1425*radius*radius;
    }
    float perimeter()
    {
        return 2*(3.1425*radius);
    }
};

int main()
{
    rectangle r(2,4);
    shape *p = &r;
    //p->area();
    //p->perimeter();

    cout<<"the area of the rectangle is "<<p->area()<<endl;    
    cout<<"the perimeter of the rectangle is "<<p->perimeter()<<endl;

    circle c(3);
    shape *q = &c;

    //q->area();
    //q->perimeter();

    cout<<"the area of the circle is "<<q->area()<<endl;    
    cout<<"the perimeter of the circle is "<<q->perimeter()<<endl;

}