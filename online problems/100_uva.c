#include <stdio.h> //accepted
int main(){
    long long int i,j,m,n,p,cycle,res,temp;
    while(scanf("%lld %lld",&i,&j)!= EOF){
        if( i>0 && i<1000000 && j>0 && j<1000000 ){
            m=i;
            p=j;
            if(m>p){
                temp=m;
                m=p;
                p=temp;
            }
            res=0;
            for(m;m<=p;m++){
                cycle=0;
                n=m;
                while(1){
                    cycle++;
                    if(n==1)
                        break;
                    else
                        if(n%2==1)
                            n=3*n+1;
                        else
                            n/=2;
                }
                if(res<cycle)
                    res=cycle;
            }
            printf("%lld %lld %lld\n",i,j,res);
        }
    }
    return 0;
}
