#include <stdio.h>
int main(){
    int i,j;
    for(i=7;i>0;i--){
        printf("\t");
        for(j=0;j<i;j++){
            printf("C ");
        }
        printf("\n\n");
    }
    for(i=0;i<=5;i++){
        printf("\t");
        for(j=0;j<=i+1;j++)
            printf("C ");
        printf("\n\n");
    }
    return 0;
}
