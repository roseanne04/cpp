/*BINARY OPERATOR OVERLOADING USING MEMBER FUNCTION:
#include<iostream>
using namespace std;
class Complex
{
    int r,i;
    public:
    void input()
    {
        cout<<"Enter two numbers:"<<endl;
        cin>>r>>i;
    }
    void display()
    {
        cout<<"Result:"<<r<<"+"<<i<<"i"<<endl;
    }
    Complex operator +(Complex c1)
    {
        Complex c3;
        c3.r=r+c1.r;
        c3.i=i+c1.i;
        return c3;
    }
};
int main()
{
    Complex c1,c2,c3;
    c1.input();
    c2.input();
    c3=c1+c2;
    c3.display();
    return 0;
}
*/


/*BINARY OPERATOR OVERLOADING USING FRIEND FUNCTION:    
#include<iostream>
using namespace std;
class Complex
{
    public:
    int r,i;
    void input()
    {
        cout<<"Enter two numbers:"<<endl;
        cin>>r>>i;
    }
    void display()
    {
        cout<<"Result:"<<r<<"+"<<i<<"i"<<endl;
    }
    friend Complex operator +(Complex c1,Complex c2);
};
    Complex operator +(Complex c1,Complex c2)
    {
        Complex c3;
        c3.r=c2.r+c1.r;
        c3.i=c2.i+c1.i;
        return c3;
    }
int main()
{
    Complex c1,c2,c3;
    c1.input();
    c2.input();
    c3=c1+c2;
    c3.display();
    return 0;
}
*/


/*UNARY OPERATOR OVERLOADING*/