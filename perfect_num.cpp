#include<iostream>
using namespace std;
int main()
{
    int i=1,n,sum=0;
    cout<<"enter n ";
    cin>>n;
    for(i;i<=n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }    
        cout<<sum<<endl;
        

    if(2*n==sum)
    {
        cout<<n<<" is a perfect number."<<endl;
    }
    
    else
    {
        cout<<n<<" is not a perfect number."<<endl;
    }
    
    return 0;
}