#include <stdio.h>

int main(){
    int n,m,i,sum;
    while(scanf("%d",&n)!= EOF){
        sum=0;
        for(i=0;i<n;i++){
            scanf("%d",&m);
            sum+=m;
        }
    printf("\tSUM IS : %d\n",sum);
    }
    return 0;
}
