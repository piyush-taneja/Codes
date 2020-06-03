#include<iostream>
using namespace std;
class employee
{
    char name[10];
    int employee_no;
    int age;
    int salary;
public:
    void enter_data()
    {
        cout<<"Enter name";
        cin>>name;
        cout<<endl<<"Enter employee no";
        cin>>employee_no;
        cout<<endl<<"Enter age";
        cin>>age;
        cout<<endl<<"Enter salary";
        cin>>salary;
    }
    void display_data()
    {
        cout<<endl<<"Name"<<name;
        cout<<endl<<"emplloyee no"<<employee_no;
        cout<<endl<<"Age"<<age;
        cout<<endl<<"Salary"<<salary;
    }
};
class engineer:public employee
{
    char design[10];
public:
    void enter_data()
    {
        employee::enter_data();
        cout<<endl<<"Enter designation of the engineer";
        cin>>design;
    }
    void display_data()
    {
        cout<<"****Displaying particulars of the engineers***";
        employee::display_data();
        cout<<endl<<design;
    }
};
int main()
{
    engineer er;
    er.enter_data();
    er.display_data();
}
