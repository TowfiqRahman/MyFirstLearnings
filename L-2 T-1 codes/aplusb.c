///uva lets bet solved


#include <stdio.h>

int main(){
long long int t=0,a=0,b=0,r=0;
scanf("%lld",&t);
while(t--){
    scanf("%lld %lld",&a,&b);
    if((a+b)%2!=0){
        printf("impossible\n");
    }
    else if(b>a){
        printf("impossible\n");
    }
    else{
        r=(a+b)/2;
        printf("%lld %lld\n",r,a-r);
    }
}
return 0;
}
