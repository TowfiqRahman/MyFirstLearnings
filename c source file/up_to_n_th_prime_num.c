#include <stdio.h>  //100 er por vejal soro hoy...
int prime(int n){
    int check=1,j;
    if (n==2||n==3||n==5||n==7)
        return 1;
    else if (n%2==0)
        return 0;
    else if (n%3==0)
        return 0;
    else if (n%5==0)
        return 0;
    else if (n%7==0)
        return 0;
    else if(n>=121){                          //mama kam koira falasiiiiii !!!!!!!
         for(j=11;j<n;j++){
             if(n%j==0){
                check=0;
                return 0;
             }
        }
        if(check==1)
            return 1;
    }
    else
        return 1;
}
int main (){
    int n,p,i,c;
    while(scanf("%d",&n)!=EOF){
        c=0;
        printf("\n\tup to %d th  prime numbers are: \n\n\t",n);
        for(i=2;;i++){
            p=prime(i);
            if(c==n)
                break;
            else if(p==1){
                ++c;
                printf("%d ",i);
            }
        }
        printf("\n\n\tnumber of primes %d\n\n",c);
    }
    return 0;
}
