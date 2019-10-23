#include <stdio.h>
void call_by_value(int,int);
int main (){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("before going to funcion. \n\n \ta= %d, \n\n\tb=%d,\n\n",a,b);
    call_by_value(a,b);
    printf("in main after coming from functin ->\n\n\ta= %d\n,\tb=%d\n",a,b);
    return 0;
}
void call_by_value(int a, int b ){
    a+=1;
    b+=1;
    printf("in void function with increment -> \n\n\ta= %d\n,\tb=%d\n",a,b);
}
