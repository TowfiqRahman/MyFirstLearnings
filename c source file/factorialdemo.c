


/// does not work perfectly..



#include <stdio.h>
int main (){
    int n,i,fact;
    while(scanf("%d",&n)==1){
        fact=1;
        for(i=2;i<=n;i++)
            fact*=i;
        printf("%d!=%d\n",n,fact);
    }
    return 0;
}
