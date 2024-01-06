#include<iostream>
using namespace std;

class student
{
    private:
    int rollno;
    string name;
    float marks1;
    float marks2;
    float marks3;

    public:
    
        student(int r,string n,float m,float p,float c)
        {
            rollno=r;
            name=n;
            marks1=m;
            marks2=p;
            marks3=c;
        }
          float total()
          {
            float marks=marks1+marks2+marks3;
            return marks;
          }
        char grade()
        {
            float average=total()/3;
            if(average>60)
            {
            return 'A';
            }
            else if(average>=40 && average<=60)
            {
                return 'B';
            }
            else
            {
                return 'C';
            }
        }
};

int main()
{
    int rollno;
    string name;
    float m,p,c;

    cout<<"Enter roll no. = "<<endl;
    cin>>rollno;
    cout<<"Enter name = "<<endl;
    cin>>name;
    cout<<"Enter marks of all 3 subjects = "<<endl;
    cin>>m>>p>>c;

    student r(rollno,name,m,p,c);


    cout<<"total marks are = "<<r.total()<<endl;
    cout<<"Grade is "<<r.grade()<<endl;
    
    return 0;
}