#include <stdio.h>

int main (){
    int n,T,a,b,i,c;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&n);
        a=0;b=1;
        for(i=1;i<=n;i++){
            if(i==n)
                printf("%3d\n",a);
            c=a+b;
            a=b;
            b=c;
        }
    }
    return 0;
}
