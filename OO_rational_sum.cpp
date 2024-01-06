#include<iostream>
using namespace std;

class rational
{
    private:
    int p;
    int q;

    public:
    rational()
    {
        p=1;
        q=1;
    }
    rational(int p,int q)
    {
        this->p=p;
        this->q=q;
    }
    rational(rational &r)
    {
        this->p=r.p;
        this->q=r.q;
    }
    int getP(){return p;}
    
    int getQ(){return q;}

    void setP(int p)
    {
        this->p=p;
    }
     void setQ(int q)
    {
        this->q=q;
    }
    rational operator+(rational r)
    {
        rational t;
        t.p=this->p*r.q+this->q*r.p;
        t.q=this->q*r.q;
        return t;
    }
    friend ostream & operator <<(ostream &os,rational &r);
};
    ostream & operator<<(ostream &os,rational &r)
    {
        os<<r.p<<"/"<<r.q;
        return os;
    }

    int main()
    {
        rational r1(1,2),r2(3,6),r3;
        // cout<<"enter the first rational value: "<<endl;
        // cin>>r1.p>>r1.q;

        // cout<<"enter the second rational value: "<<endl;
        // cin>>r2.p>>r2.q; 

        r3=r1+r2;

        cout<<"the sum of "<<r1<<" and "<<r2<<" is "<<r3<<endl; 

    }