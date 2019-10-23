#include <stdio.h>
int main(){
    int i,n,a=0,b=0;
    scanf("%d",&i);
    while(i--){
        scanf("%d",&n);
        if(n>10){
            a=10;b=n-10;
        }
        else{a=0;b=n;}
        printf("%d %d\n",a,b);
    }
return 0;
}
