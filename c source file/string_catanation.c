#include <stdio.h>

int main(){
    char a[30]="bangla",b[]="desh";
    int i,j,length;
    length=6;
    for(i=6,j=0;b[j]!='\0';i++,j++)
        a[i]=b[j];
    printf("string catenion : %s",a);

    return 0;
}
