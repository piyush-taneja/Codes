#include<iostream>
using namespace std;
class circle
{
protected:
    float r;
public:
    void enter_c()
    {
        cout<<"Enter radius";
        cin>>r;
    }
    void display()
    {
        cout<<"Radius is"<<r;
    }
};
class rectangle
{
protected:
    float length,breadth;
public:
    void enter_lb()
    {
        cout<<"Enter length";
        cin>>length;
        cout<<"Enter breadth";
        cin>>breadth;
    }
    void display()
    {
        cout<<"length is"<<length;
        cout<<"\nbreadth is"<<breadth;
    }
};
class cylinder :public circle,public rectangle
{
public:
    void volume()
    {
    enter_c();
    enter_lb();
        cout<<"The volume of cylinder is"<<3.14*r*r*length;
    }
};
int main()
{
    cylinder c1;
    c1.volume();
    return 0;
}
