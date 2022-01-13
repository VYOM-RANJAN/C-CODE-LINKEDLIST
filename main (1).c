/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
#define n 5 
int stack[n];
int top=-1;

void push(){
    int x;
    printf("enter the element ");
    scanf("%d",&x);
    if(top==n-1){
        printf("stack is full");
    }
    else{
        top++;
        stack[top]=x;
    }
}


void pop(){
    if(top==-1){
        printf("underflow");
    }
    else{
        int y;
        y=stack[top];
        printf("%d",y);
        top--;
    }
}

void peek(){
    if(top==-1)
    {
        printf("underflow");
    }
    else{
        printf("%d",stack[top]);
    }
    
}


void display(){
    int i;
    for(i=top;i>=0;i--)
    {
        printf("%d",stack[i]);
    }
}

// void display(){
//     int i;
//     for(i=0;i<=top;i++)
//     {
//         printf("%d",stack[i]);
//     }
// }


void main(){
    
    int choice;
    while(choice){
        printf("enter the choice : ");
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            peek();
            break;
            case 4:
            display();
            break;
        }
    }
    
}





















