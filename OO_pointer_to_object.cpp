#include <iostream>
using namespace std;

class rectangle
{
    public:
    int length;
    int breadth;

    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
    

};

//pointer to an object in stack
/*
int main()
{
    rectangle r;
    rectangle *p;
    p=&r;

    //r.length=10;
    //r.breadth=5;

    //cout<<"area= "<<r.area()<<endl<<"perimeter= "<<r.perimeter()<<endl; //OR we can access through pointers


    p->length=10;
    p->breadth=5;

    cout<<"area= "<<p->area()<<endl<<"perimeter= "<<p->perimeter()<<endl;



        


}*/

//pointer to an object in heap

int main()
{
    rectangle *p=new rectangle();                //dynamic object created in HEAP
    p-> length=10;
    p-> breadth=5;

    cout<<"area= "<<p->area()<<endl<<"perimeter= "<<p->perimeter()<<endl;

}