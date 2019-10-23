#include <stdio.h>
int main (){
    int n,i,check=1;
    while(scanf("%d",&n)!=EOF){
        if(n==2||n==3||n==5||n==7)
            printf("\n\t%d is prime!!!!!\n",n);
        else if(n%2==0)
            printf("\n\t%dIS not PRIME 2!\n",n);
        else if(n%3==0)
            printf("\n\t%d Is not Prime 3!\n",n);
        else if(n%5==0)
            printf("\n\t%d Is not Prime 5!\n",n);
        else if(n%7==0)
            printf("\n\t%d Is NOT prime 7!\n",n);
        else if(n>=100){
                for(i=11;i<n;i++){
                    if(n%i==0){
                        check=0;
                        printf("\n\tis (11>)not prime\n");
                        break;
                    }
                }
                if(check==1)
                    printf("is prime >>11");
        }
        else
            printf("\n\t%d IS PRIME::::::.....>>>>\n",n);
    }
    return 0;
}
