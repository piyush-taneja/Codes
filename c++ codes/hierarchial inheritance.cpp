#include<iostream>
using namespace std;
const int len=20;
class student
{
char f_name[len],l_name[len];
int age;int rollno;
public:
    void enter()
    {
        cout<<"Enter first name";
        cin>>f_name;
        cout<<"Enter last name";
        cin>>l_name;
        cout<<"Enter age";
        cin>>age;
        cout<<"Enter roll no.";
        cin>>rollno;
        }
    void display()
    {
        cout<<"\nName of Student is"<<f_name<<" "<<l_name;
        cout<<"\nAge of Student is"<<age;
        cout<<"\nRoll no. of Student is"<<rollno;
    }
};

class arts :public student
{
    char asub1[len];
    char asub2[len];
    char asub3[len];
public:
    void enter()
    {
        student ::enter();
        cout<<"Enter sub1 of arts of student";
        cin>>asub1;
        cout<<"Enter sub2 of arts of student";
        cin>>asub2;
        cout<<"Enter sub3 of arts of student";
        cin>>asub3;

        }
    void display()
    {
        student::display();
        cout<<"\nsub1 of arts of student"<<asub1;
        cout<<"\nsub2 of arts of student"<<asub2;
        cout<<"\nsub3 of arts of student"<<asub3;
    }

};
class science :public student
{
char ssub1[len];
char ssub2[len];
char ssub3[len];
public:
    void enter()
    {
        cout<<"Enter sub1 of science of student";
        cin>>ssub1;
        cout<<"Enter sub2 of science of student";
        cin>>ssub2;
        cout<<"Enter sub3 of science of student";
        cin>>ssub3;

        }
    void display()
    {

        cout<<"\nsub1 of science of student"<<ssub1;
        cout<<"\nsub2 of science of student"<<ssub2;
        cout<<"\nsub3 of science of student"<<ssub3;
    }


};
int main()
{
    arts a1;
    a1.enter();
    science a2;
    a2.enter();
    a1.display();
    a2.display();
}
