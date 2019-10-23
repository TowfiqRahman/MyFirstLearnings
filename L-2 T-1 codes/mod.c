#include <stdio.h>

int main(){
long long int t;
while(scanf("%lld",&t)==1){
    if(t%4==0){
        printf("4\n");
    }
    else{
    printf("0\n");
    }
}
return 0;
}
