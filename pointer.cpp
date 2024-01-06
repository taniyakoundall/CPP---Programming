#include<iostream>
using namespace std;
int main()
{
    int s=6;
    int *j=&s;
    cout<<s<<endl;
    cout<<j<<endl;
    cout<<*j<<endl;
    cout<<&s<<endl;
    cout<<&j<<endl;

    return 0;
}