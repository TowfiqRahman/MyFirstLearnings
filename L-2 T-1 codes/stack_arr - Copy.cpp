#include<bits/stdc++.h>
#define MAX 5

int top=-1,stack[MAX];
void push();
void pop();
void display();
void push()
{
    int val;
    if(top==MAX-1)
    {
        printf("overflow");
    }
    else
    {
        printf("\nEnter element to push:");
        scanf("%d",&val);
        top=top+1;
        stack[top]=val;
        printf("\nPress any key.....");
    }
}
void pop()
{
    if(top==-1)
    {
        printf("\nStack is empty!!Press any key....");
    }
    else
    {
        printf("\n Deleted element is  %d \n Press any key....",stack[top]);
        top=top-1;
    }
}


void display()
{
    int i;
    if(top==-1)
    {
        printf("\nStack is empty!!Press any key….");
    }
    else
    {
        printf("Stack is…\n");
        for(i=top;i>=0;--i)
            printf("%d\n",stack[i]);
    printf("Press any key….");
    }
}
int main()
{
    int ch;
    while(1)
    {
        printf("\n*** Stack Menu ***\n");
        printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
        printf("Enter your choice(1-4): ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
            default: printf("\nWrong Choice!!Press any key….");
        }
    }
    return 0;
}
