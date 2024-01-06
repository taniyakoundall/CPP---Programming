#include<iostream>
using namespace std;

// int fun()
// {
//     static int v=0;       //static variable v
//     int a=5;
//     v++;
//     cout<<a <<"  "<<v<<endl;
// }
// int main()
// {
//     fun();
//     fun();
//     fun();
//     return 0;
// }



        // In OOPs
class Student
{
    public:
    int roll;
    string name;

    static int addno;
    
    Student(string n)
    {
        addno++;
        roll=addno;
        name=n;
    }
    void display()
    {
        cout<<"name "<<name<<endl<<"roll "<<roll<<endl;
    }
};

int Student::addno=0;

int main()
{
    Student s1(" john ");
    Student s2(" sana ");
    Student s3(" rohan ");
    Student s4(" ferral ");
    
    s1.display();
    s2.display();
    s3.display();
    s4.display();
     
    cout<<Student::addno<<endl;
}