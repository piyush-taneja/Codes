#include<stdio.h>
struct node{
int data;
struct node*next
};
struct node*head=NULL;
void insert(int data;int n)
{
int i;
struct node*temp=(struct node*)malloc(sizeof(struct node));
struct node*temp2;
temp->data=data;
temp->next=NULL;
if(n==1)
{
temp->next=head;
*head=temp;
return;}
else
{
temp2=head;
for(i=1;i<n-1;i++)
{
temp->next=temp2->next;
temp2->next=temp;}}}


void print(struct node*p)
{if(p==NULL)
return;
print(p->next);
printf("%d",p->data);
}

void main()
{
insert(4,1);
print(head);}
