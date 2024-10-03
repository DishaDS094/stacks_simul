#include<stdio.h>
#include<stdlib.h>
#define size 10
void push(int);
void pop();
void display();
int stack[size], top=-1;
void main()
{
    int ch,val;
    while(1){
        printf("\n****MENU****\n");
        printf("\nSelect task to be performed \n1.push \n2.pop \n3.display \n4.exit \n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : printf("\nEnter the value to be added: ");
                     scanf("%d",&val);
                     push(val);
                     break;
            case 2 : pop();
                     break;
            case 3 : display();
                     break;

            default: printf("\n INVALID INPUT!!!TRY AGAIN");
            case 4 : exit(0);
                     break;

        }
    }
}
void push(int val)
{
    if (top==size-1){
        printf("\n Stack is full");
        }
    else{
        stack[++top]=val;
        printf("\nVALUE SUCCESSFULLY INSERTED");
    }

}
void pop()
{
    if(top==-1){
        printf("\n STACK IS EMPTY");

    }
    else{
        printf("\n %d value successfully deleted",stack[top]);
        top--;
    }
}
void display()
{
    printf("\nSTACK:");
    for(int i=top;i>=0;i--){
        printf("\n %d",stack[i]);

    }
}


