#include <stdio.h>
int main(){
    int r,c,k,space,count=1;
    while(scanf("%d",&r)!=EOF){
        space=r;
        for(c=1;c<=r;c++){
            for(k=1;k<space;k++)
                printf(" ");
            for(k=1;k<=c;k++){
                printf("*");
                if(c>1 && count<c){
                    printf("A");
                    count++;
                }
            }
        printf("\n");
        space--;
        count=1;
        }
    }
    return 0;
}
