#include<stdio.h>
int main(){
    int n,c,r,num,space;
    while((scanf("%d",&n))!=EOF){
        space=n;
        for( r=1 ; r<=n ; r++){
            num=r;
            for(c=1;c<=space;c++)
                printf("   ");
            space--;
            for(c=1;c<=r;c++){
                printf("%3d",num++);
                //printf("   ");
            }
            num--;
            num--;
            for(c=1;c<r;c++){
                printf("%3d",num--);
                //printf("   ");
            }
            printf("\n");
        }
    }
        return 0;
}
