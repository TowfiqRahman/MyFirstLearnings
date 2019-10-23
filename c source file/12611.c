#include <stdio.h>

int main (){
    int i,t,r,a,b,c;
    scanf("%d",&t);
    if(t<101){
        for(i=1;i<=t;i++){
            scanf("%d",&r);
            if(r<1001){
                a=r*30/20;
                b=r*45/20;
                c=r*55/20;
                printf("Case %d:\n",i);
                printf("-%d %d\n",b,a);
                printf("%d %d\n",c,a);
                printf("%d -%d\n",c,a);
                printf("-%d -%d\n",b,a);
            }
        }
    }
    return 0;
}
