#include<iostream>
#include<stdlib.h>
using namespace std;

class complex{
public:int *ptr;
complex(){
ptr=(int*)malloc(sizeof(int));
}
~complex()
{
free(ptr);
}
};
int main()
{
    complex c;
    *(c.ptr)=5;
    cout<<*(c.ptr);
    c.~complex();
    cout<<endl;
    cout<<*(c.ptr);
}


