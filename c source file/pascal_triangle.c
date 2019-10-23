#include<stdio.h>
int main (){
    int row,i,j,space;
    while(scanf("%d",&row)!=EOF){
        space=row;
        for(i=1;i<=row;i++){
            for(j=1;j<space;j++)
                printf("    ");
            for(j=1;j<=i;j++)
                printf("%4d",j);
            if(j>2){
                --j;
                --j;
                for(;j>0;j--)
                    printf("%4d",j);
            }
            printf("\n\n");
            space--;
        }
    }
     return 0;
}
