#include <stdio.h>

int main(){
    int a[10],i,brown,green,clear;
    for(i=0;i<9;i++)
        scanf("%ld",a[i]);
    if( a[0] + a[3] < a[0] + a[5] && a[0]+a[3] < a[3] + a[5])
        brown=a[0]+a[3];

    return 0;
}
