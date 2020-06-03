#include<stdio.h>
#include<conio.h>
#include<malloc.h>
typedef struct stacktype
{
int info;
struct stacktype *next;
}stack;
stack *top=NULL;

void insert(stack *top)
{
int item;
stack *p;
p=(stack*)malloc(sizeof(stack));
printf("enter the no. to be inserted");
scanf("%d",&item);
p->next=top;
top=p;
}


void delete(stack *top)
{
stack *ptr;
ptr=top;
top=top->next;
free(ptr);
}

void peek(stack *top)
{
 printf("%d",top->info);

}
void main()
{
stack *top;
insert(top);
peek(top);
insert(top);
delete(top);
}
