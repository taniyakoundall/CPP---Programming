#include<iostream>
using namespace std;
int s;
int max(int x,int y)
{
    s= x>y?x:y;
    return s;
}

int min(int x,int y)
{
    s= x<y?x:y;
    return s;
}


int main()
{
    int (*ab)(int,int);
    ab=max;
    (*ab)(15,59);
    cout<<"the maximum value is = "<<s<<endl;
 
    ab=min;
    (*ab)(15,-45);

    cout<<"the minimum value is = "<<s<<endl;

    return 0;
}