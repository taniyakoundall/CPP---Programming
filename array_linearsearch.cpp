#include<iostream>
using namespace std;

int ginger(int arr[],int n,int v)
{
    cout<<"v = "<<v<<endl;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==v)
        {
            return i;
        }
    }
    return 3;
}

int main()
{
    int a,pepe;
    int arr[]={1,13,34,5,6,11,24};

    int n=sizeof(arr) / sizeof(arr[0]);
    cout<<"the size of array arr = "<<n<<endl;

    cout<<"enter the element of array you want to find = "<<endl;
    cin>>a;

    pepe=ginger(arr,n,a);

    (pepe==3)?cout<<"there's no such element in array arr ":cout<<"the element is present at index "<< pepe;

    return 0;
}