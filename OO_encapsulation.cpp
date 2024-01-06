#include <iostream>
using namespace std;

class Rectangle
{
    private:
    int length;
    int breadth;

    public:
    int setLength(int l)
    {
        if(l>=0)
        length=l;
        else
        cout<<"length cannot be negative so it is assumed to be zero "<<endl;
        length=1;
    }
    int setBreadth(int b)
    {
        if(b>=0)
        breadth=b;
        else
        cout<<"breadth cannot be negative so it is assumed to be zero "<<endl;
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

    void area()
    {
        return length*breadth;
    }
    void perimeter()
    {
        return 2*(length+breadth);
    }
};


int main()
{
    Rectangle r;
    cout<<" HELLO BUDDY !!"<<endl;
    /*cout<<"enter length= "<<endl;
    cin>>a;

    cout<<"enter breadth= "<<endl;
    cin>>b;
*/
    r.setLength(10);
    r.setBreadth(5);

    cout<<"area ="<<r.area()<<endl;    
    cout<<"perimeter ="<<r.perimeter()<<endl;

    return 0;

}