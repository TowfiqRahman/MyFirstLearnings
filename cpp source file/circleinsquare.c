#include <stdio.h>
#include <math.h>
#define pi 2*acos(0.0)
int main(){
int t,cas=1;
double r,c;
scanf("%d",&t);
while(t--){
    scanf("%lf",&r);
    c=(2*r)*(2*r)-(pi*r*r);
    printf("Case %d: %0.2lf\n",cas++,c);
}
return 0;
}
