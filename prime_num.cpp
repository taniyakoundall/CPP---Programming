#include<iostream>
using namespace std;
int main()
{
    int i=1,n,count=0;
    cout<<"enter n ";
    cin>>n;
    for(i;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        cout<<n<<" is prime number."<<endl;
    }
    else
    {
        cout<<n<<" is not a prime number."<<endl;
    }
    return 0;
}