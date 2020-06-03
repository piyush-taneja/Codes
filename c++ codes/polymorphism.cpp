#include<iostream>
using namespace std;
class b
{
public:
   virtual void display()
    {
        cout<<"printing base class";
    }
};
class d1:public b{
public:
    void display()
    {
        cout<<"printing derive class 1";
    }
};
class d2:public b
{
public:
    void display()
    {
        cout<<"printing derive class 2";
    }
};
int main()
{
    b *obj;
    d2 der2;
    obj=&der2;

    obj->display();
    return 0;
}
