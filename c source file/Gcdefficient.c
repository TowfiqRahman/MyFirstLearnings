#include <stdio.h>
int main(){
    int a,b,t,gcd;
    while(scanf("%d %d",&a,&b)!=EOF){
        if(a==0)
            gcd=a;
        else if(b==0)
            gcd=b;
        else {
            while(b!=0){
                t=b;
                b=a%b;
                a=t;
            }
            gcd=a;
        }
        printf("\tGCD is :%d\n\n",gcd);
    }
    return 0;
}
