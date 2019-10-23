#include <stdio.h>
#include <math.h>
int main(){
int i,cas=1;
double u,v,t,a,s,ans;
while(1){
    scanf("%d",&i);
    u=0.0;v=0.0;a=0.0;t=0.0;s=0.0;
    if(i==0)
        continue;
    else if(i==1){
        scanf("%lf %lf %lf",u,v,t);
        a=(v-u)/t; s=u*t+0.5*a*t*t;
        printf("Case %d: %lf %lf",cas++,s,a);
    }
    else if(i==2){
        scanf("%lf %lf %lf",u,v,a);
        t=(v-u)/a; s=u*t+0.5*a*t*t;
        printf("Case %d: %lf %lf",cas++,s,t);
    }
    else if(i==3){
        scanf("%lf %lf %lf",u,a,s);
        ans=(u*u)+(2.0*a*s);
        v=sqrt(ans); t=(v-u)/a;
        printf("Case %d: %lf %lf",cas++,v,t);
    }
    else {
        scanf("%lf %lf %lf",v,a,s);
        ans=(v*v)-(2.0*a*s);
        u=sqrt(ans); t=(v-u)/a;
        printf("Case %d: %lf %lf",cas++,u,t);
    }
    }
return 0;
}
