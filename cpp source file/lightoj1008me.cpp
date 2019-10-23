#include <stdio.h>
#include<math.h>
int main(){
    long long int s,x,y,n,m,k,a;
    int t,count=0;
    scanf("%d",&t);
    while(t--){
        scanf("%lld",&s);
        n=ceil(sqrt(s));
        m=n*n;
        k=m-n+1;
        a=m-(2*n)+2;
        if(n%2==1){
            if (s==k)
                x=y=n;
            else if(s>k){
                x=n;
                y=m-s+1;
            }
            else if(s<k){
                y=n;
                x=s-a+1;
            }
            printf("Case %d: %lld %lld\n",++count,y,x);
        }
        else{
            if(k==s)
                x=y=n;
            else if(s<k){x=n;y=s-a+1;}
            else if(s>k){y=n;x=m-s+1;}
            printf("Case %d: %lld %lld\n",++count,y,x);
        }

    }
return 0;
}
