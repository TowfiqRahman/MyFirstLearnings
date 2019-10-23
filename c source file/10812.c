#include <stdio.h>

int main(){
    int t,a,b,r1,r2;
    int i=0;
    scanf("%d",&t);
    for(i=0;i<t;t++){
        scanf("%d %d",&a,&b);
        r1 = (a+b)/2;
        r2 = (a-b)/2;
        if(a<b || r1<0 || r2<0)
            printf("impossible\n");
        else{
        if(r1>r2)
            printf("%d %d\n",r1,r2);
        else
            printf("%d %d\n",r2,r1);
        }
    }
    return 0;
}
