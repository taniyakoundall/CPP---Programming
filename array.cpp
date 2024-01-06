#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array = "<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements of array = "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        /* code */
    }
    cout<<"elements of array are = "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
        /* code */
    }
    
    return 0;
}