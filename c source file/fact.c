
/// does not work,,



#include<stdio.h>
int main (){
    int i,n;
    unsigned long int fact;
    while(scanf("%d",&n)!=EOF){
        fact=1;
        for(i=1;i<=n;i++){
            fact=fact*i;
        }
        printf("\t%u\n",fact);
        printf("\t%d\n",(int)fact);
        printf("\t%ld\n",(long int)fact);
    }
    return 0;
}
