#include<iostream>
using namespace std;

/*int* fun(int size)
{
    int *p=new int[size];
    for(int i=0;i<size;i++)
    {
        p[i]=i+1;
    }

    return p;
}

int main()
{
    int *ptr=fun(5);
    cout<<ptr<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<ptr[i]<<endl;
    }
    return 0;
}*/
int &fun(int &b)
{
    return b;
}

int main()
{
    int a=10;
    fun(a)=25;

    cout<<"here a = "<<a<<endl;

    return 0;
}