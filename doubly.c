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
   struct node *prev;
};
struct node *head=0,*tail=0;

void create(){
    
  struct node *newnode;
  newnode=(struct node *)malloc(sizeof(struct node));
  printf("enter the data");
  scanf("%d",&newnode->data);
  newnode->prev=0;
  newnode->next=0;
  
  if(head==0)
  {
   head=tail=newnode;   
  }
  else
  {
      tail->next=newnode;
      newnode->prev=tail;
      tail=newnode;
  }
}

void display(){
    struct node *temp;
    temp=head;
    while(temp!=0)
    { 
      printf("%d",temp->data);
      temp=temp->next;
    }
    
}
void insertatbegg(){
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the data ");
    scanf("%d",&newnode->data);
  if(head==0)
  {
      head=newnode;
  }
  else{head->prev=newnode;
      newnode->next=head;
      head=newnode;
      
  }
}

int main()
{
    int choice ;
    while(choice){
        printf("enter the choice");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            {
                create();
                break;
            }
            case 2:
            {
                display();
                break;
            }
        }
    }
    return 0;
}
