#include <stdio.h>
#include <math.h>
#define pi 2*acos(0.0)
int main(){
int t,n,cas=1;
double R,r;
scanf("%d",&t);
while(t--){
    scanf("%lf%d",&R,&n);
    r=R*sin(pi/n)/(1+sin(pi/n));
    printf("Case %d: %lf\n",cas++,r);
}

return 0;
}
