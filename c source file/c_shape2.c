#include <stdio.h>
int main (){
    int i,j,k;
    for(i=5;i>0;i--){
        printf("\t");
        for(j=5;j>i;j--)
            printf("  ");
        for(k=2*i-1;k>0;k--)
            printf("%c ",6);
        printf("\n\n");
    }
    for(i=1;i<=4;i++){
        printf("\t");
        for(j=4;j>i;j--)
            printf("  ");
        for(k=0;k<2*i+1;k++)
            printf("%c ",6);
        printf("\n\n");
    }
    return 0;
}
