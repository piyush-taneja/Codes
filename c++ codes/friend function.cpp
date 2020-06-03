#include<iostream>
using namespace std;
class B; //forward declaration of class b
class A{
public:
    int x;
    friend void fun(A a1,B b1);
};
class B{
public:
    int y;
    friend void fun(A a1,B b1);
};
void fun(A a1,B b1)
{
    cout<<a1.x<<endl<<b1.y;
}
int main()
{
    A a;
    B b;
    a.x=12;
    b.y=13;
    fun(a,b);
    return 0;
}
