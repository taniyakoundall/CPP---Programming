#include<iostream>
using namespace std;
int main()
{
    int n=4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i+j<3)
            {
                cout<<"   ";
            }
            else
            {
                cout<<" * ";
            }
        }
        cout<<endl;
    }
    
}