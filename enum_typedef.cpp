#include<iostream>
using namespace std;
typedef int marks;

enum day{mon=8,tue,wed=0,thu,fri,sat,sun=6};
enum dept{cs,it,mech,ec};

int main()
{
    day d;
    cout<<mon<<endl;
    cout<<tue<<endl;
    cout<<wed<<endl;
    cout<<thu<<endl;
    cout<<fri<<endl;
    cout<<sat<<endl;
    cout<<sun<<endl;
    
    marks m1,m2,s;
    m1=34;
    m2=56;
    s=m1+m2;
    cout<<"s="<<s<<endl;
    

    return 0;
}