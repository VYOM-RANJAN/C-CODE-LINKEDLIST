/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head=0;
void create(){
    struct node *newnode;
    struct node *temp;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the data in node ");
    scanf("%d",&newnode->data);
    if(head==0)
{
    head=temp=newnode;
}
else{
    temp->next=newnode;
    temp=newnode;
}
}
void display()
{struct node*temp;
    temp=head;
    printf("all the data in the linked list are ");
    while(temp!=0)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}
void insert_at_beg(){
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the data in inserted node ");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(head==0){
        head=newnode;
    }
    else{
        newnode->next=head;
        head=newnode;
    }
}
void insert_at_end(){
    struct node *newnode;
    struct node *temp;
   
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the data");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(head==NULL)
    head=newnode;
    else{ 
        temp=head;
    while(temp->next!=0)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    temp=newnode;
        
    }
}
void insert_after_any_node(){
    struct node *newnode;
    struct node *temp;
    temp=head;
    int value ;
    printf("enter the value ");
    scanf("%d",&value);
    while(temp!=0){
        if(temp->data==value)
        {
            newnode=(struct node *)malloc(sizeof(struct node));
            printf("enter the data");
            scanf("%d",&newnode->data);
            newnode->next=temp->next;
            temp->next=newnode;
            return;
    }
     temp=temp->next;}
     printf("not found that node");
}
int main()
{
int choice ;
while(choice!=0){
    printf("enter the choice");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        {
             create();
             break;
        }
        case 2:
       { insert_at_beg();
        break;}
        case 3:
        {
         display();
         break;
        }
        case 4:
        {insert_at_end();
        break;}
        case 5:
        {
            insert_after_any_node();
            break;
        }
        default :
        printf("please enter a valid choice");
    }
}

    return 0;
}
