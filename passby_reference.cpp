#include<iostream>
using namespace std;

/*int swap(int *a,int *b)
{
    cout<<*a<<" "<<*b<<endl;
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    cout<<*a<<" "<<*b<<endl;
}
int main()
{
    int x=10,y=20;

    swap(&x, &y);
    cout<<x<<"  "<<y<<endl;
    return 0;
}*/

int swap(int &a,int &b)
{
    cout<<"address of a and b are  :"<<&a<<" "<<&b<<endl;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<a<<" "<<b<<endl;
}

int main()
{
    int x=10,y=20;
    swap(x,y);
    cout<<"address of x and y are  :"<<&x<<" "<<&y<<endl;
    cout<<x<<" "<<y<<endl;
    return 0;
}