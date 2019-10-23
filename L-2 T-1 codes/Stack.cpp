//does not work
#include<cstdio>
#define MAX 10

using namespace std;

class stacki {

    int arry[MAX];
    int top;

public:

    stacki ()
    {
        top = 0;
    }

    void push(int item)
    {
        if(top == MAX) {
            printf("Overflow\n");
            return;
        }

        arry[top++] = item;
    }

    int  pop()
    {
        if(!top) {
            printf("Underflow\n");
            return 0;
        }

        return arry[top--];
    }

    void display ()
    {
        for(int i=0; i<top; i++) printf("%d ", arry[i]);
        printf("\n");
    }
};


class queuei {

    int arry[MAX];
    int rear, front;

public:

    queuei ()
    {
        rear = 0;
        front = 0;
    }

    void push(int item)
    {
        if(rear == MAX) {
            printf("Overflow\n");
            return;
        }

        arry[rear++] = item;
    }

    int  pop()
    {
        if(front == rear) {
            printf("Underflow\n");
            return 0;
        }

        return arry[front++];
    }

    void display ()
    {
        for(int i=0; i<rear; i++) printf("%d ", arry[i]);
        printf("\n");
    }
};

int main()
{
    stacki stk;

    for(int i=0; i<20; i++) stk.push(i++);

    //stk.display();

 //   for(int i=0; i<10; i++) stk.pop();

   // stk.display();

    return 0;
}
