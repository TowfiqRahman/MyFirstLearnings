#include <stdio.h>
#include <string.h>

int main (){
    char a[30]="abcdef",b[30]="ghijkl",c[20];
    int len = strlen(a);
    printf("String length :%d\n",len);

    strcat(b,a);
    printf("String Catanation:%s \n String length: %d\n\n",b,strlen(b));

    strcpy(c,a);
    puts(c);
    puts(a);

    return 0;
}
