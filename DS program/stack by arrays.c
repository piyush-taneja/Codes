#include<stdio.h>
#include<conio.h>
#define MAX_SIZE 10
int top=-1;
int a[10];


void push(int x)
{
top=top+1;
a[top]=x;
}

void pop()
{
top=top-1;
}

int isempty()
{
if(top==-1)
return 1;
else
return 0;
}

int Top()
{
return a[top];
}

void Print()
{
int i;
for(i=0;i<top;i++)
{
printf("%d\n",a[i]);
}}

void main()
{

push(5);
push(6);
Print();
pop();
Print();
Top();
}
