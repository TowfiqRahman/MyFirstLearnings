#include <stdio.h>
int get_gcd(int,int);
int main(){
    int a,b,lcm;
    while(scanf("%d %d",&a,&b)!=EOF){
        //printf("GCD = %d\n",get_gcd(a,b));
        lcm=(a*b)/get_gcd(a,b);
        printf("\tLCM of %d,%d =%d\n\n",a,b,lcm);
        }
        return 0;
}
int get_gcd(int x,int y){
    int gcd,t;
    if(x==0)
        gcd=x;
    else if(y==0)
        gcd=y;
    else {
        while(y!=0){
            t=y;   printf("t %d\n",t);
            y=x%y; printf("y %d\n",y);
            x=t;   printf("x %d\n",x);
            }
            gcd=x;
        }
    return gcd;
}
