#include <stdio.h>
int main (){
    int r,i,n,temp;
    while((scanf("%d",&n))!=EOF){
        //printf("\033[44m\n"); kaj kore na..
        temp=n;
        for(r=1;r<=n;r++){
            for(i=1;i<temp;i++)
                printf(" ");
            temp--;
            for(i=1;i<=(2*r)-1;i++)
                printf("*");
            printf("\n");
        }
    }
    return 0;
}
