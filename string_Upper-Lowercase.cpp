#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string str={"HELLO"};
    for(int i=0;str[i]!='\0';i++)
    {
        str[i]+=32;
    }
     cout<<str<<endl;
    return 0;
}