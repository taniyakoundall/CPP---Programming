#include<iostream>
using namespace std;

int arr[]={1,2,6,5,47,3,9,8,24,68,78};         
int n= 11;                                       //global variable declaration and initialization.


//linear search using function itsfound.

int itsfound(int arr[],int n,int x)              //function declaration.
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            return i;
        }
    }
    return 1;
}

int main()
{
    int k,rese;
    cout<<"n = "<<n<<endl;
    
    cout<<"enter the number you want to find : "<<endl;
    cin>>k;

    rese=itsfound(arr,n,k);                       //function call.

    (rese==1) ? cout<<"there's no such element present in the array " : cout<<"the element is present at "<<rese<<endl;

    return 0;
}