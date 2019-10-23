#include <stdio.h>

int main(){
int t,cas=1;
unsigned long int n,m;
scanf("%d",&t);
while(t--){
    scanf("%lu%lu",&n,&m);
    printf("Case %d: %lu\n",cas++,m*n/2);
}
return 0;
}
