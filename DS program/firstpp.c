#include<stdio.h>
#include<malloc.h>
typedef struct n
{int info;
struct n*next;
}
node;
node*head=NULL;
void insert(node **head,int item)
{
node *ptr;
ptr=(node*)malloc(sizeof(node));
ptr->info=item;
if(*head==NULL)
ptr->next=NULL ;
else

ptr->next=*head;
*head=ptr;

}

void traverse(node *head)
{
while(head!=NULL)
{
printf("\n%d\n",head->info);
head=head->next;}
}


void insertatend(node **head,int item)
{
node *ptr,*loc;
ptr=(node*)malloc(sizeof(node));
ptr->info=item;
ptr->next=NULL;
if(*head==NULL)
*head=ptr;
else
{
loc=*head;
while(loc->next!=NULL)
loc=loc->next;
loc->next=ptr;
}
}

void delete(node**head,int item)
{
    node*ptr;
    ptr=(node*)malloc(sizeof(node));
    if(head==NULL)
        return;
    else
    {

        ptr=*head;
        *head=(*head)->next;
        free(ptr);
    }
}


void main()
{
int c,item;
printf(" 1 for insert\n 2 for insert at end \n 3 for traverse \n 4 for delete from beginning \n 5 for exit \n ");
while(1)
{

    scanf("\n%d",&c);
    switch(c)
    {

    case 1:
        scanf("%d",&item);
        insert(&head,item);
        break;
    case 2:
        scanf("%d",&item);
        insertatend(&head,item);
        break;
    case 3:
        traverse(head);
        break;
    case 4:
        delete(&head,item);
        break;
    case 5:
        exit(0);
    }
}

}
