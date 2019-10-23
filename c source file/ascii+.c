#include <stdio.h>

int main (){
    char ch='a';//097
    ch=ch-2;
    printf("%c\n",ch);
    ch=ch+2;
    printf("%c\n",ch);
    printf("%c\n",ch+=2);
    return 0;
}
