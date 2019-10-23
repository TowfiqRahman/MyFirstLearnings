#include <stdio.h>
int main(){
    char str[30]="madam",str_n[30];
    int i,j;
   //scanf("%s",str);
    for(i=4,j=0;i>=0;i--,j++)
        str_n[j]=str[i];
        //printf("%c",str[i]);
    str_n[j]='\0';
    printf("%s",str_n);
    return 0;
}
