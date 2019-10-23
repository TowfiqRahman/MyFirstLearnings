#include <stdio.h>
#include <math.h>

#define Number 100
#define Prime 100

bool flag[Number+5];
int primes[Prime+5];

int seive(){
    int i,j,total=0,val;
    for(i=2; i<=Number; i++)
        flag[i]=1;
    val=sqrt(Number)+1;
    for(i=2;i<=val;i++){
        if(flag[i]){
            for(j=i;j*i<=Number;j++)
            flag[i*j]=0;
        }
    }
    for(i=2;i<=Number;i++){
        if(flag[i])
            primes[total++]=i;
    }
    return total;
}
int main(){
    int total=seive();
    for(int i=0;i<total;i++)
        printf("%d ",primes[i]);
printf("\nTotal primes: %d\n ",total);
printf(" 25th prime number:%d\n",primes[24]);
return 0;
}
