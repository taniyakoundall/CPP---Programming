#include<iostream>
using namespace std;
int main()
{
    float bill,discount=0.0;
    cout<<"enter the bill amount :";
    cin>>bill;

    if(bill>500)
    {
        discount=bill*20/100;
    }
    else if(bill>=100&&bill<500)
    {
        discount=bill*10/100;
    }

    cout<<"bill amount :"<<bill<<endl;
    cout<<"discount on your billing amount :"<<discount<<endl;
    cout<<"billing to be paid :"<<bill-discount;
    return 0;
}