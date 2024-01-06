#include<iostream>
using namespace std;

class complex
{
    public:
    int real;
    int img;

    complex add(complex x)
    {
        complex t;
        t.real=real+x.real;
        t.img=img+x.img;
        return t;
    }

};

int main()
{
    complex c1,c2,c3;
    c1.real=8, c1.img=2;
    c2.real=6, c2.img=2;

    c3=c1.add(c2);

    cout<<"the addition of complex no. is "<<c3.real<<"+i"<<c3.img<<endl;
    return 0;
}