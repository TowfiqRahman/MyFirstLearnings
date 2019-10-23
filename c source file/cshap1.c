#include <stdio.h>
int main(){
    int i,j;
    for(i=0;i<6;i++){
        for(j=0;j<=i;j++)
            printf("c");
        printf("\n");
    }
    printf("\n");
    for(i=0;i<=6;i++){
        for(j=i;j<6;j++)
            printf("c");
        printf("\n");
    }
    return 0;
}
