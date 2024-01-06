#include<iostream>
using namespace std;

int display()
{
    cout<<"hello";
}

int main()
{
    int(*fun)();
    fun=display;
    (*fun)();
    return 0;
}