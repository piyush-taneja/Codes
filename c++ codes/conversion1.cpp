#include<iostream>
using namespace std;
const float M=1.81;
class distance
{
    int Kmeter;
    int meter;
    float km;
public:
    distance()
    {
        Kmeter=meter=0;
    }
    distance(float miles)
    {
        km=(M*miles);
        Kmeter=(int)(km);
        meter=(km-Kmeter)*1000;
    }
    distance(int k,float m)
    {
        Kmeter=k;
        meter=m;
    }

void display()
{
cout<<Kmeter<<"Kilometer and"<<meter<<"meters";
}
operator float()
{
    float k=meter/1000;
    k+=float(Kmeter);
    return k/m;
}};
int main()
{
    distance d1(5.0);
    cout<<"d1=";
    d1.display();
    return 0;
}
