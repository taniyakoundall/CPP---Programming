#include<iostream>
using namespace std;

int g=0;

int fun()
{
    int a=20;
    int g=5;
    g=g+a;
    cout<<"here in fun =  "<<g<<endl;
}
int main()
{
    cout<<"exct. = "<<g<<endl;
    int x=10, g=15;
    fun();
    g++;
    cout<<"here in main = "<<g<<endl;

    return 0;
}