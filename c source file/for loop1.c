#include <stdio.h>

int main (){
    double n ,sum ,range;
    while(scanf("%lf",&range)!=EOF){
    sum=0;
    for(n=1.0;n<=range;n++)
        sum+=n;
    printf("\n\n\n\tsum of 1to %lf: %0.3lf\n",range,sum);
    }
    return 0;
}
