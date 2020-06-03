#include<iostream>
using namespace std;
class minu{
int a,b,c;
public:
    minu()
    {
        a=b=c=0;
    }
    minu(int A,int B,int C)
{
    a=A;
    b=B;
    c=C;
}
    void display();
    void operator -();
};
inline void minu::display()
{
    cout<<endl<<"a="<<a;
    cout<<endl<<"b="<<b;
    cout<<endl<<"c="<<c;
}
inline void minu::operator -()
{
    a=-a;
    b=-b;
    c=-c;
}
int main()
{
    minu m(2,3,4);
    cout<<"before activating the operator";
    m.display();
    -m;
    cout<<"\nafter activating the operator";
    m.display();
}
