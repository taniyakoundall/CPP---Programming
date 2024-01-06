#include<iostream>
using namespace std;

/*float add(float x,float y)
{
    float z;
    z=x+y;
    return z;
}
int main()
{
    float a=2.2f, b=4.4f, r;
    r=add(a,b);
    cout<<r<<endl;

    return 0;
}

int maxim(int a,int b,int c)
{
    if(a>b&&b>c)
    return a;
    else if(b>c)
    return b;
    else 
    return c;
}
int main()
{
    int x=43,y=65,z=22,r;
    r=maxim(x,y,z);
    cout<<r<<endl;
    return 0;

}

int add(int x,int y)
{
    return x+y;
}
int add(int x,int y,int z)
{
    return x+y+z;
}
float add(float x,float y)
{
    return x+y;
}
int main()
{
    int a=10,b=5,c,d;
    c=add(a,b);
    d=add(a,b,c);

    float i=2.5f,j=3.5f,k;
    k=add(i,j);
    cout<<c<<endl<<d<<endl<<k<<endl;
    return 0;
}*/

template <class T>
T licu(T x,T y)
{
    if(x>y)
    return x;
    else
    return y;
}
int main()
{
    cout<<licu(10,5)<<endl;
    cout<<licu(10.5f,6.9f)<<endl;
    return 0;

}