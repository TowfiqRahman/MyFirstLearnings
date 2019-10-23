#include <stdio.h>
#include <math.h>
double midlen(double x,double y,double p,double q);
double slen(double x,double y,double p,double q){
    double len=0;
    len=sqrt((x-p)*(x-p)+(y-q)*(y-q));
    return len;
}
double midlen(double x,double y,double p,double q){
    double len;
    p=(x+p)/2;
    q=(y+q)/2;
    len=slen(x,y,p,q);
    return len;
}
int main(){
double ox,oy,ax,ay,bx,by,r,mid,theta;
int t,cas=1;

scanf("%d",&t);
while(t--){
    scanf("%lf%lf%lf%lf%lf%lf",&ox,&oy,&ax,&ay,&bx,&by);
    r=slen(ox,oy,ax,ay);
    mid=midlen(ax,ay,bx,by);
    theta=asin(mid/r);
    theta=theta*2;
    printf("Case %d: %lf\n",cas++,(r*theta));
    }
return 0;
}
