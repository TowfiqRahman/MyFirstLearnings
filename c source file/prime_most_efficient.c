#include <stdio.h>
#include <math.h>
int is_prime(int);
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        if(1==is_prime(n))
            printf("\t%d is prime\n\n",n);
        else
            printf("\tIs not Prime :<..\n\n");
        }
    return 0;
}
int is_prime(int n){
    int i;
    double root;
    if(n==2)
        return 1;
    else if(n<=1)
        return 0;
    else if(n%2==0)
        return 0;
    else{
        root=sqrt((double)(n));
        for(i=3;i<=root;i=i+2){
            if(n%i==0)
                return 0;
        }
    return 1;
    }
}
