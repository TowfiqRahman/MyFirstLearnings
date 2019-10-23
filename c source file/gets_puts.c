#include <stdio.h>
int main(){
    char str[30];
    int i,len;

    printf("%6d\n%6d\n%6d\n%6d\n",sizeof(char),sizeof(int),sizeof(float),sizeof(double));

    gets(str);
    len=0;
    for(i=0;str[i]!='\0';i++){
        len=len+1;
    }
    printf("\n\nLength of '%s' is : %d\n\n",str,len);
    return 0;
}
