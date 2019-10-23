#include <stdio.h>
#include <math.h>
#define pi 3.141592
int fact(int);
int main(){
    int d,i,j;
    double r,sum,y;
    while(scanf("%d",&d)!=EOF){
        r=d*pi/180;
        printf("\tr=%lf\n\n",r);
        y=0;sum=1;
        for(i=2,j=1;i<=8;i+=2,j++){
            printf("\t\ti=%d j=%d\n",i,j);
            y=y+pow((double)(-1),(double)(j))*pow(r,(double)(i))/fact(i);
        }
        sum=1+y;
        printf("\ncos %d is :%lf",d,sum);
    }
    return 0;
}
int fact(int n){
    int res=1;
    for(;n>1;--n)
        res*=n;
    printf("\nfactorial is %d\n",n,res);
    return res;
}
