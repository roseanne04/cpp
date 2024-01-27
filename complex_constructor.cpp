#include <iostream>
using namespace std;
class complex
{
    public:
    int r,i;
    complex()
    {
        r=0;
        i=0;
    }
    complex(int x, int y)
    {
        r=x;
        i=y;
    }
    complex(int a)
    {
        r=a;
        i=a;
    }
    void display()
    {
        cout<<r<<"+"<<i<<"i"<<endl;
    }
    friend complex add(complex c1,complex c2);
    //friend void display(complex c3);
};
complex add(complex c1,complex c2)
{
    complex c3;
    c3.r=c1.r+c2.r;
    c3.i=c1.i+c2.i;
    return c3;
}
complex add(int a,complex c2)
{
    complex c3;
    c3.r=a+c2.r;
    c3.i=c2.i;
    return c3;
}
/*void display(complex c3)
{
    cout<<c3.r<<"+"<<c3.i<<"i"<<endl;
}*/
int main()
{
    complex c1;
    complex c2(2,3);
    complex c3(4);
    complex c4;
    c1.display();
    c2.display();
    c3.display();
    while(1)
    {
        int choice;
        cout<<"Enter 1 to add integer and complex number"<<endl;
        cout<<"Enter 2 to add two complex numbers"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:{int a=10;
            c4=add(a,c2);
            c4.display();
            break;}
            case 2:{
            c4=add(c1,c2);
            c4.display();
            break;
            }
            case 3:exit(0);
            break;
        }
    }
    return 0;
}
