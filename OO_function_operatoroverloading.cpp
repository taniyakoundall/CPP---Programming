#include<iostream>
using namespace std;

class complex
{
    private:
    int real,img;

    public:

    complex(int r=0,int i=0)
    {
        real=r;
        img=i;
    }
    void display()
    {
        cout<<"the result is "<<real<<"+i"<<img<<endl;
    }
    friend complex operator+(complex c1,complex c2);
};

complex operator+(complex c1,complex c2)
{
    complex t;
    t.real=c1.real+c2.real;
    t.img=c1.img+c2.img;

    return t;
}

int main()
{
    //cout<<"enter the values for complex numbers = "<<endl;
    //cin>>c1.real>>c1.img;
    /*c1.real=3;
    c1.img=5;
    c2.real=5;
    c2.img=8;*/
    complex c1(4,7);
    complex c2(7,9);
    complex c3=c1+c2;

    c3.display();

    return 0;
}