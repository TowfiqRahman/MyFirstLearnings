#include <stdio.h>

int main(){
int t,cas=1;
double res,ans,t1,t2,v1,v2,v3,a1,a2;
scanf("%d",&t);
while(t--){
    scanf("%lf%lf%lf%lf%lf",&v1,&v2,&v3,&a1,&a2);
    t1=v1/a1;
    t2=v2/a2;
    ans=(t1>t2)?t1:t2;
    res=(v1*t1-0.5*a1*t1*t1)+(v2*t2-0.5*a2*t2*t2);
    printf("Case %d: %0.8lf %0.8lf\n",cas++,res,(v3*ans));
    }
return 0;
}
