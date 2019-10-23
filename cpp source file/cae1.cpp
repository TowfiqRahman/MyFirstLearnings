#include <stdio.h>
#include <math.h>
int main(){
double u,v,t,a,s,ans;
int i,cas=1;

while(cas){
    scanf("%d",&i);
    if(i==4)
        {
        scanf("%lf %lf %lf",&v,&a,&s);
        ans=(double)(v*v)-(2.0*a*s);
        u=sqrt(ans); t=(double)(v-u)/a;
        printf("Case %d: %lf %lf",cas++,u,t);
        }
    else if(i==1){
            printf("entered");
        scanf("%lf %lf %lf",&u,&v,&t);
        printf("%d %lf %lf %lf",i,u,v,t);
        a=(double)(v-u)/t; s=(double)(u*t)+(0.5*a*t*t);
        printf("Case %d: %lf %lf",cas++,s,a);
    }
    else if(i==2){
        scanf("%lf%lf%lf",&u,&v,&a);
        t=(double)(v-u)/a; s=(double)(u*t)+(0.5*a*t*t);
        printf("Case %d: %lf %lf",cas++,s,t);
    }
    else if(i==3){
        scanf("%lf %lf %lf",&u,&a,&s);
        ans=(double)(u*u)+(2.0*a*s);
        v=sqrt(ans); t=(double)(v-u)/a;
        printf("Case %d: %lf %lf",cas++,v,t);
    }
    else {
        break;}
    }
return 0;
}
