#include<iostream>
using namespace std;
int main()
{
    int x,sum=0;
    int s[6]={12,14,16,18,20,22};

    int key,l=0,h=5,mid;
    cout<<"enter key :"<<endl;
    cin>>key;
    while (l<=h)
    {
        mid=(l+h)/2;
        if(key==s[mid])
        {
            cout<<"found at "<<mid;
            return 0;
        }
        else if (key<s[mid])
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }   
    }
    cout<<"not found "<<endl;
}