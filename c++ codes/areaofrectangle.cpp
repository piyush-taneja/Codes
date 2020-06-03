#include<iostream>
using namespace std;
class rectangle{
int length;
int breadth;
public:
    void enter_data();
    void display_data();
};
void rectangle::enter_data()
{
    cout<<"Enter length";
    cin>>length;
    cout<<"Enter breadth";
    cin>>breadth;
}
void rectangle::display_data()
{
    cout<<"Required area is"<<length*breadth<<endl;

}
int main()
{
    rectangle r1,r2;
    r1.enter_data();
    r1.display_data();

    r2.enter_data();
    r2.display_data();
return 0;
}
