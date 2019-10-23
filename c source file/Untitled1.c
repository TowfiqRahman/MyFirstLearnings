#include<stdio.h>
int main()
{
    int n,k,i,count,a[101];
    while(scanf("%d%d",&n,&k)!=EOF){
    if(n>=1 && n<=50 && k>=1 && k<=n){
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        printf("%d",&a[i]);
    }
    for(i=0,count=0;i<n;i++){
        if (a[i]>=k && a[i]>a[i++]){
            count++;
        }
    }
    printf("%d",count);
    }
    }
    return 0;
}
