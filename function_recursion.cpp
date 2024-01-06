#include<iostream>
using namespace std;

int fun(int a)
{
    if(a>0)
    {
    fun(a-1);
    cout<<a<<endl;
    }
}

int main()
{
    int x=5;
    fun(x);

    return 0;

}