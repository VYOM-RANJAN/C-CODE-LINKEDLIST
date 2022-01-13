/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};
struct node *head=0,*tail;
int count=0;
void create (){
    struct node *newnode,*temp;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the data ");
    scanf("%d",&newnode->data);
    if(head==0)
    {
        head=temp=newnode;
        temp->next=head;
        
    }
    else{
        temp->next=newnode;
        newnode->next=head;
        temp=newnode;
    }
}

void display(){
    struct node *temp=0;
    if(head==0)
    {
        printf("empty linked list ");
        
    }
    else{
        temp=head;
        while(temp->next!=head)
        {
            printf("%d",temp->data);
            temp=temp->next;
        }
        printf("%d",temp->data);
    }
}

void create1(){
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter data");
    scanf("%d",&newnode->data);
    if(head==NULL){
        head=tail=newnode;
        tail->next=head;
    }
    else{
        tail->next=newnode;
        tail=newnode;
        tail->next=head;
    }
}

void create2(){
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
printf("enter data");
scanf("%d",&newnode->data);
if(tail==0)
{
    tail=newnode;
    newnode->next=tail;
    
}
else{
    newnode->next=tail->next;
    tail->next=newnode;
    tail=newnode;
}
count++;
}

void display2(){
    struct node *temp;
    temp=tail->next;
    while(temp->next!=tail->next)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
}

void insertatbegg(){
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the data ");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(tail==0)
    {
        tail=newnode;
    }
    else{
        newnode->next=tail->next;
        tail->next=newnode;
    }
    count++;
}

void insertatend(){
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the data");
    scanf("%d",&newnode->data);
    newnode->next=0;
    newnode->next=tail->next;
    tail->next=newnode;
    tail=newnode;
    count++;
}

void insertatanypos(){
    struct node *newnode,*temp;
    int pos;
    int i=1;
    printf("enter the pos");
    scanf("%d",&pos);
   if(i<0||pos>count)
   {
       printf("invalid pos");
       
   }
   else{
    newnode=(struct node *)malloc(sizeof(struct node));
   printf("enter the data");
   scanf("%d",&newnode->data);
   newnode->next=0;
   temp=tail->next;
       while(i<pos-1)
       {
           temp=temp->next;
           i++;
       }
   newnode->next=temp->next;
   temp->next=newnode;
   count++;
   }
}

int main()
{   int choice;
while(choice){
    printf("enter the choice");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        {
            create2();
            break;
        }
        case 2:
        {
            display();
            break;
        }
        case 3:
        {
            display2();
            break;
        }
        case 4:
        {
         insertatbegg();
         break;
        }
        case 5:
        {
            insertatend();
            break;
        }
        case 6:
        {
            insertatanypos();
            break;
        }
    }
}
    return 0;
}
