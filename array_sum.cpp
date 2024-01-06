#include<iostream>
using namespace std;
int main()
{
    int ncount=0,pcount=0;
    int A[7]={23,-24,-25,-26,-27,-28,0};
    
    for(int x:A)
    {
        if(x<0)
        {
            ncount++;
        }
        else
        {
            pcount++;
        }
    }
    cout<<ncount<<" "<<pcount<<" ";
    return 0;
}