#include<iostream>
using namespace std;
class complex{
double real;
double imaginary;
public:
    void enter_data();
    void display_data();
    void addition(complex c1,complex c2);
    void subtraction(complex c1,complex c2);
    void multipication(complex c1,complex c2);
    void division(complex c1,complex c2);
};
void complex::enter_data()
{
    cout<<"Enter the real part";
    cin>>real;
    cout<<"Enter the imaginary part";
    cin>>imaginary;

}
void complex::display_data()
{
    if(imaginary>0)
        cout<<real<<"+"<<imaginary<<"i";
    else
        cout<<real<<"-"<<imaginary<<"i";
}
void complex::addition(complex c1,complex c2)
{
 real=c1.real+c2.real;
 imaginary=c1.imaginary+c2.imaginary;
display_data();
}
void complex::subtraction(complex c1,complex c2)
{
 real=c1.real-c2.real;
 imaginary=c1.imaginary-c2.imaginary;
display_data();
}
void complex::multipication(complex c1,complex c2)
{
 real=c1.real*c2.real;
 imaginary=c1.imaginary*c2.imaginary;
display_data();
}void complex::division(complex c1,complex c2)
{
 real=c1.real/c2.real;
 imaginary=c1.imaginary/c2.imaginary;
display_data();
}
int main()
{

    complex c1,c2,c3,c4,c5,c6;
    int c;
    while(1){
    cout<<"1.Enter Data\n 2.Perform Addition \n 3.Perform Subtraction\n 4.Perform Multipication \n5.Perform Division \n6.exit";
    cin>>c;




    switch(c)
    {


case 1:
    c1.enter_data();
    c2.enter_data();
    break;
case 2:
    c3.addition(c1,c2);
    break;
case 3:
    c4.subtraction(c1,c2);
    break;
case 4:
    c5.multipication(c1,c2);
    break;
case 5:
    c6.division(c1,c2);
    break;
case 6:
        break;
default:
    cout<<"Wrong choice";

}}
return 0;
}

