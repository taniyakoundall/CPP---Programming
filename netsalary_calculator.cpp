#include<iostream>
using namespace std;
int main()
{
    float basic;
    float percentallow;
    float percentdeduct;
    float net;

    cout<<"enter the basic salary :";
    cin>>basic;
    cout<<"enter the percentage allowance : "<<endl;
    cin>>percentallow;
    cout<<"enter the percentage of deduction :"<<endl;
    cin>>percentdeduct;

    net=basic+basic*percentallow/100-basic*percentdeduct/100;

    cout<<"the net salary : "<<net<<endl;
    return 0;
}