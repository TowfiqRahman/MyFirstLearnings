#include <stdio.h>
int main()
{
    int r,i,k,count;
    while(scanf("%d",&r)!=EOF){
        printf("\n");
        count=1;
        for(i=1;i<=r;i++){
            for(k=1;k<=i;k++){
                printf("%5d",count);
                count++;
            }
            printf("\n");
        }
    }
    return 0;
}
