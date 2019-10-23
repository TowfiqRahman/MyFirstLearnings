#include <stdio.h>
int main (){
    int i,j,k;
    for(i=5;i>0;i--){
        for(j=5;j>=i;j--)
            printf("%2c",6);
        for(k=1;k<2*i-1;k++)
            printf("  ");
        for(j=5;j>=i;j--)
            printf("%2c",6);
        printf("\n\n");
    }
    return 0;
}
