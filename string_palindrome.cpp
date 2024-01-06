#include<iostream>
#include<strings.h>
using namespace std;
int main()
{
    string str="MADAM";
    string rev=" ";
    cout<<"str = "<<str<<endl;
    int len=(int)str.length();
    cout<<"len = "<<len<<endl;
    rev.resize(len);

    for(int i=0,j=len-1;i<len;i++,j--)
    {
        rev[i]=str[j];
    }
    rev[len]='\0';

    cout<<"rev = "<<rev<<endl;
    for(int i=0;i<len;i++)
    {
        cout<<rev[i];
    }
    cout<<endl;
    if(str.compare(rev)==0)
    {
        cout<<"palindrome"<<endl;
    }
    else
    {
        cout<<"non palindrome"<<endl;
    }
    return 0;
}