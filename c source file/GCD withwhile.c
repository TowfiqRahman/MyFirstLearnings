#include <stdio.h>
int main(){
    int a,b,t,gcd;
    scanf("%d %d",&a,&b);
    if(a==0)
        printf("GCD is : %d",a);
    else if(b==0)
        printf("GCD is : %d",b);
    else {
        while(b!=0){
            t = b;
            b = a%b;
            a = t;
        }
    printf("GCD is\n%d\n",gcd);
    }

    return 0;
    }
