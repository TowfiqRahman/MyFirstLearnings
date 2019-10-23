#include <stdio.h>
int main ()
{
    int i,j,t,a[t],b[t],sum[t];
    scanf("%d",&t);
    for(i=1;i<=t && t<=100;i++){
        scanf("%d%d",&a[i],&b[i]);
    }
    for(i=1;i<=t;i++){
        if(a[i]>=0 && b[i]>=0 && a[i]<=100 && b[i]<=100){
        for(j=a[i],sum[i]=0;j<=b[i];j++){
            if(j%2==1)
                sum[i]=sum[i]+j;
            }
        printf("case %d:%d\n",i,sum[i]);
    }
    }
    return 0;
}
