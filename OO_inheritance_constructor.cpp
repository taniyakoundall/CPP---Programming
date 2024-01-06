#include<iostream>
using namespace std;

class base
{
    private:
    int length;
    int breadth;

    public:
    base()
    {cout<<"non param base"<<endl;}
    base(int a)
    {cout<<"param base "<<a<<endl;}

};
class derived: public base
{
    public:
    derived()
    {cout<<"non param derived"<<endl;}
    derived(int x)
    {cout<<"param derived "<<x<<endl;}   
    //derived(int x,int y)
    //{cout<<"param derived "<<x<<" and "<<y<<endl;}
    derived(int x,int y):base(x)
    {cout<<"param derived "<<x<<" and "<<y<<endl;}
};

int main()
{
    derived f;
    //derived v(45);
    derived d(5,34);
}
