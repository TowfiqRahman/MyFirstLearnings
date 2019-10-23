#include <stdio.h>
void show(){
    static int a=1;
    printf("\t\tstatic value calling %d\n\n",a);
    a++;
}
void showa(){
    int ab=1;
    printf("\t\twithout static calling %d\n\n",ab);
    ab++;
}
int main (){
    printf("\tbefore calling normal\n\n");
    showa();showa();showa();
    printf("before calling static\n\n");
    show();show();show();
    printf("main function closing");
    return 0;
}
