#include <stdio.h>
int main (){
    int i,j,k;
    for(i=0;i<5;i++){
        printf("\t");
        for(j=0;j<=i;j++)
            printf("  ");
        for(k=5;k>i;k--)
            printf("c ");
        printf("\n\n");
    }
    for(i=0;i<4;i++){
        printf("\t");
        for(j=4;j>i;j--)
            printf("  ");
        for(k=0;k<=i+1;k++)
            printf("c ");
        printf("\n\n");
    }
    return 0;
}
