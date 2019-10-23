#include <stdio.h>
int main (){
    char ch,lower;//capital;;
    while(scanf("%c",&ch)!=EOF){
        //capital=ch-'f'+'F';
        //printf("Capital of %c is %c\n",ch,capital);
        lower=ch-'A'+'a';
        printf("Smaller of %c is %c\n",ch,lower);
    }
    return 0;
}
