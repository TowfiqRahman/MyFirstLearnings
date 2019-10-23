#include <stdio.h>
int main(){
    long int v,t,res;
    while(scanf("%ld%ld", &v,&t ) != EOF){
            res = 0;
            //printf("%d%d",&v,&t);
        if( v >= -100 && v <= 100 && t>= 0 && t <= 200)
            res = 2 * v * t;
        printf("%ld\n",res);
    }
    return 0;
}
