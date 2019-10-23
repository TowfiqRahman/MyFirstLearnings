#include <stdio.h>

int main(){
unsigned int t,a,b,c,temp,cas=1;
scanf("%u",&t);
while(t--){
    scanf("%u%u%u",&a,&b,&c);
    if(a>c && a>b){
        temp=c;c=a;a=temp;
    }
    if(b>c && b>a){
        temp=c;c=b;b=temp;
    }
    if(c*c==(a*a+b*b)){
        printf("Case %d: yes\n",cas++);
    }
    else{printf("Case %d: no\n",cas++);
    }
}
return 0;
}
