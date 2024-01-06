#include<iostream>
using namespace std;
int main()
{ 
    int n,sum=0,avg;
    cout<<"enter size of array : "<<endl;
    cin>>n;
    int A[n];
    cout<<"enter the elements of array : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
        /* code */
    }

    cout<<"the elements of array are : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<endl;;
        /* code */
    }

    for (int i = 0; i < n; i++)
    {
        sum+=A[i];
        /* code */
    }

    cout<<"sum of elements of array : "<<sum<<endl;
    avg=sum/n;
    cout<<"average of elements of array : "<<avg<<endl;
}