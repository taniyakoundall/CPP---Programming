#include<iostream>
using namespace std;
int main()
{
    string str="how many words07";
    int vowels=0,consonants=0,space=0,characters=0,numbers=0;
    cout<<str.length()<<endl;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            vowels++;
        }
        else if(str[i]==' ')
        {
            space++;
        }
        else if(str[i]>=65||str[i]<=90||str[i]>=97||str[i]<=122)
        {
            consonants++;
        }
        else if(str[i]>=48||str[i]<=57)
        {
            numbers++;
        }
        else
        {
            cout<<"heYAA"<<endl;
        }
        
    }
    cout<<"vowels = "<<vowels<<endl;
     cout<<"consonants = "<<consonants<<endl;
      cout<<"characters = "<<characters<<endl;
       cout<<"words = "<<space+1<<endl;
       cout<<"spaces = "<<space<<endl;
        cout<<"numbers = "<<numbers<<endl;

       return 0;
}