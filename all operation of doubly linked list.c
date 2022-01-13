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
struct node *head=0,*tail;
int count=0;
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
  count++;
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
    printf("enter the data");
    scanf("%d",&newnode->data);
  if(head==0)
  {
      head=newnode;
  }
  else{head->prev=newnode;
      newnode->next=head;
      head=newnode;
      
  }
  count++;
}
void insertatend(){
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the data");
    scanf("%d",&newnode->data);
    if(tail==0)
    {
        head=tail=newnode;
    }
    else{
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
    }
}
/*void insertafteranynode(){
    struct node *temp;
    struct node *newnode;
    int pos;
    int i=1;
    printf("enter the pos");
    scanf("%d",&pos);
    if(pos<0||pos>=count+1)
    {
        printf("invalid position");
    }
 else{
     newnode=(struct node *)malloc(sizeof(struct node));
     temp=head;
     printf("enter the data");
     scanf("%d",&newnode->data);
     while(i<pos-1)
     {
         temp=temp->next;
         i++;
     }
    newnode->next=temp->next;
    temp->next=newnode;
    newnode->prev=temp;
    newnode->next->prev=newnode;
 }  
 count++;
}*/
void insertafteranynode(){
    int value;
    printf("enter the value ");
    scanf("%d",&value);
    struct node *temp=head;
    while(temp!=0)
    {
        if(temp->data==value)
        {
            struct node *newnode;
            newnode=(struct node *)malloc(sizeof(struct node));
            printf("enter the data");
            scanf("%d",&newnode->data);
            newnode->prev=0;
            newnode->next=0;
            newnode->next=temp->next;
            newnode->prev=temp;
            temp->next=newnode;
            newnode->next->prev=newnode;
            count++;
            return;
        }
        temp=temp->next;
    }
    printf("value not found");
}

void deleteatbegg(){
    struct node *temp;
    temp=head;
    head=head->next;
    head->prev=0;
    free(temp);
    count--;
}

void deletefromend(){
  struct node *temp;
  if(tail==NULL)
  {
      printf("empty linkedlist");
      
  }
  else{
      temp=tail;
      tail=tail->prev;
      tail->next=0;
      free(temp);
      count--;
  }
    
}

/*void deleteafteranynode(){
if(head==0)
{
    printf("empty linked list");

}
else{
    
    int i=1;
    int pos;
    printf("enter the pos");
    scanf("%d",&pos);
    if(pos<0||pos>count)
    {printf("invalid pos");
        
    }
    else{
        struct node *temp;
    temp=head;
    while(i<pos)
    {
        temp=temp->next;
        i++;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    free(temp);
    count--;
    }
}
}
*/
void deleteafteranynode(){
if(head==0)
{
    printf("empty linked list");

}
else{
    
    int value;
    
    printf("enter the value");
    scanf("%d",&value);
        struct node *temp;
    temp=head;
    while(temp!=0)
    {
        if(temp->data==value){
            temp->prev->next=temp->next;
            temp->next->prev=temp->prev;
            free(temp);
            count--;
            return;
        }
        temp=temp->next;
    }
    printf("value not found ");
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
            case 3:
            {
                insertatbegg();
                break;
            }
            case 4:
            {
                insertatend();
                break;
            }
            case 5:
            {
                insertafteranynode();
                break;
            }
            case 6:
            {
                 deleteatbegg();
                 break;
            }
            case 7:
            {
                deletefromend();
                break;
            }
            case 8:
            {
                deleteafteranynode();
                break;
            }
        }
    }
    return 0;
}
