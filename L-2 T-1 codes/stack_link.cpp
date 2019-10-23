#include<iostream>
using namespace std;


//   Creating a NODE Structure
struct node
{
    int data;
    struct node *next;
};

// Creating a class STACK
class stack
{
    struct node *top;
    public:
    stack() // constructure
    {
        top=NULL;
    }
    void push(); // to insert an element
    void pop();  // to delete an element
    void show(); // to show the stack
};
// PUSH Operation
void stack::push()
{
    int value;
    struct node *ptr;
    cout<<"\n\tPUSH Operation\n";
    cout<<"\tEnter a number to insert: ";
    cin>>value;
    ptr=new node;
    ptr->data=value;
    ptr->next=NULL;
    if(top!=NULL)
        ptr->next=top;
    top=ptr;
    cout<<"\n\tNew item is inserted to the stack!!!";

}

// POP Operation
void stack::pop()
{
    struct node *temp;
    if(top==NULL)
    {
        cout<<"\n\tThe stack is empty!!!";
    }
    temp=top;
    top=top->next;
    cout<<"\n\tPOP Operation........\nPoped value is "<<temp->data;
    delete temp;
}

// Show stack
void stack::show()
{
    struct node *ptr1=top;
    cout<<"\n\tThe stack is\n";
    while(ptr1!=NULL)
    {
        cout<<ptr1->data<<" ->";
        ptr1=ptr1->next;
    }
    cout<<"\tNULL\n";
}

// Main function
int main()
{
    stack s;
    int choice;
    while(1)
    {
        cout<<"\t\tSTACK USING LINKED LIST\n";
        cout<<"\t1:PUSH\n\t2:POP\n\t3:DISPLAY STACK\n\t4:EXIT\n";
        cout<<"\t Enter your choice(1-4): ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                s.push();
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.show();
                break;
            case 4:
                return 0;
                break;
            default:
                cout<<"Please enter correct choice(1-4)!!";
                break;
        }
    }
    return 0;
}
