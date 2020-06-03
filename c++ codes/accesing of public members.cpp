#include<iostream>
using namespace std;
class one
{
    int data1;
public:
    void get_data1()
    {
        cout<<"Enter Value of data1";
        cin>>data1;
    }
    void put_data1()
    {
        cout<<"data1="<<data1;
    }
};

class two
{
    int data2;
    one obj;
public:
    void get_data2()
    {
        obj.get_data1();
        cout<<"Enter data 2";
        cin>>data2;
    }
    void put_data2()
    {
        obj.get_data1();
        cout<<"data 2="<<data2;
    }
};
int main()
{
    two t;
    t.get_data2();
    t.put_data2();
return 0;
}
