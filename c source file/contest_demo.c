#include <stdio.h>

int main(){
    int T,n,i,j,sum,m;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d",&n);
        sum=0;
        for(j=1;j<=n;j++){
            scanf("%d",&m);
            sum+=m;
        }
        printf("\tCase #%d : %d\n",i,sum);
    }
    return 0;
}
