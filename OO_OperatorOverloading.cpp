#include<iostream>
#include<conio.h>
using namespace std;

class complex
{
    public:
    int real;
    int img;

    complex operator+(complex a)
    {
        complex temp;
        temp.real=real+a.real;
        temp.img=img+a.img;
        return temp;
    }    

};
int main()
{
    complex c1,c2,c3;
    c1.real=8 ,c1.img=3 ;
    c2.real=2 ,c2.img=5 ;
    c3=c1+c2;
    //printf"result = %d +i %d",c3.temp"
    cout<<"the result = "<<c3.real<<"=i"<<c3.img<<endl;
    return 0;
}