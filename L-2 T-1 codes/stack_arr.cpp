#include<bits/stdc++.h>
#define MAX 10

int top=-1,stack[MAX];
void push();
void pop();
void display();
void push()
{
    int val;
    if(top==MAX-1)
    {
        printf("\toverflow");
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
        printf("\n\nStack is empty!!Press any key....");
    }
    else
    {
        printf("\n\nDeleted element is  %d \n Press any key....",stack[top]);
        top=top-1;
    }
}


void display()
{
    int i;
    if(top==-1)
    {
        printf("\n\n\tStack is empty!!Press any key….");
    }
    else
    {
        printf("Stack is: ");
        for(i=top;i>=0;--i)
            printf("%d ",stack[i]);
    }
}
int main()
{
    int ch;
    while(1)
    {
        printf("\n\t\t*** Stack Menu ***\n");
        printf("\t1.Push\n\t2.Pop\n\t3.Display\n\t4.Exit\n");
        printf("\tEnter your choice(1-4): ");
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
            default: printf("\n\n\tWrong Choice!!Press any key….");
        }
    }
    return 0;
}
