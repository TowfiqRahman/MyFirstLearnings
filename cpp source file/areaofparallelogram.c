#include <stdio.h>
#include <stdlib.h>
int main(){
int area,t,ax,ay,bx,by,cx,cy,dx,dy,cas=1;
scanf("%d",&t);
while(t--){
    scanf("%d%d%d%d%d%d",&ax,&ay,&bx,&by,&cx,&cy);
    dx=cx-(bx-ax);dy=cy-(by-ay);
    area=((dx-ax)*(ay-by))-((bx-ax)*(ay-dy));
    printf("Case %d: %d %d %d\n",cas++,dx,dy,abs(area));
}
return 0;
}
