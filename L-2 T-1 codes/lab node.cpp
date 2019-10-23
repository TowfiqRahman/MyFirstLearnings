#include <bits/stdc++.h>

#define ll long long

using namespace std;

struct node
{
    long long roll;
    node *next;
};
node *root=NULL;

void insert(long long roll)
{
    if(root==NULL)
    {
        root=new node();
        root->roll=roll;
        root->next=NULL;
    }
    else
    {
        node *current_node=root;
        while(current_node->next!=NULL)
        {
            current_node=current_node->next;
        }
        node *newnode=new node();
        newnode->roll=roll;
        newnode->next=NULL;
        current_node->next=newnode;
    }
}

void display()
{
    node *current_node=root;
    if(root==NULL)
    {
        printf("\nThe list is empty.\n");
    }
    else
    {
        printf("The rolls are : ");
        while(current_node->next!=NULL)
        {
            printf("%lld ",current_node->roll);
            current_node=current_node->next;
        }
        printf("%lld\n",current_node->roll);
    }
}

void del(long long roll)
{
    node *current_node=root;
    node *previous_node=NULL;

    while(current_node->roll!=roll)
    {
        previous_node=current_node;
        current_node=current_node->next;
    }
    if(current_node==root)
    {
        node *temp=root;
        root=root->next;
        delete(temp);
    }
    else
    {
        previous_node->next=current_node->next;
        delete(current_node);
    }
}

void search(long long roll)
{
    int flag=0;
    node *current_node=root;
    while(current_node)
    {
        if(current_node->roll==roll)
            flag=1;
        current_node=current_node->next;
    }
    if(flag==1)
    {
        printf("\nRoll number exists.\n");
    }
    else
    {
        printf("\nRoll number dosen't exist.\n");
    }
}

void count(void)
{
    node *current_node=root;
    int total=0;
    if(root==NULL)
        printf("\nTotal Rolls : %d\n",total);
    else
    {   while(current_node->next!=NULL)
        {
            total++;
            current_node=current_node->next;
        }
        printf("\nTotal Rolls : %d\n",total+1);
    }

}

void insert_mid(long long roll)
{
    int flag=0;
    node *current_node=root;
    while(current_node)
    {
        if(current_node->roll==roll)
        {
            flag=1;
            break;
        }
        current_node=current_node->next;
    }
    if(flag==0)
    {
        printf("\nRoll number doesn't exists.\n");
    }
    else
    {
        printf("Enter Roll : ");
        long long r;
        scanf("%lld",&r);
        node *newnode=new node();
        newnode->roll=r;
        newnode->next=current_node->next;
        current_node->next=newnode;
    }
}

int main()
{
    printf("1.Insert\n2.Display\n3.Delete\n4.Search\n5.Count Total\n6.Insert after a roll\nYour choice : ");
    int choice;
    while(scanf("%d",&choice))
    {
        switch(choice)
        {
            long long roll;
        case 1:
            printf("Enter Roll : ");
            scanf("%lld",&roll);
            insert(roll);
            break;
        case 2:
            display();
            break;
        case 3:
            printf("Enter Roll : ");
            scanf("%lld",&roll);
            del(roll);
            break;
        case 4:
            printf("Enter Roll : ");
            scanf("%lld",&roll);
            search(roll);
            break;
        case 5:
            count();
            break;
        case 6:
            printf("Enter Roll : ");
            scanf("%lld",&roll);
            insert_mid(roll);
            break;
        default:
            return 0;
        }
    printf("\n1.Insert\n2.Display\n3.Delete\n4.Search\n5.Count Total\n6.Insert after a roll\nYour choice : ");
    }
    return 0;
}
