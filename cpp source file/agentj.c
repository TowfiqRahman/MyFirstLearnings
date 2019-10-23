#include <stdio.h>
#include <math.h>
#define pi acos(-1.0)
double con(double x,double y,double z){
    double a;
    a=acos((x*x+y*y-z*z)/(2*x*y))*180/pi;
return a;
}

int main(){
    int t,cas=1;
    double res,A,B,C,r1,r2,r3;
    scanf("%d",&t);
    while(t--){
        scanf("%lf%lf%lf",&r1,&r2,&r3);
        A=con(r1+r3,r1+r2,r2+r3);
        B=con(r1+r2,r2+r3,r1+r3);
        C=con(r2+r3,r1+r3,r1+r2);
        res=(0.5*(r1+r3)*(r1+r2)*sin(A*pi/180))-(pi*(A*r1*r1+B*r2*r2+C*r3*r3))/360;
        printf("Case %d: %lf\n",cas++,res);
    }
return 0;
}
