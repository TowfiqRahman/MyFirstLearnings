#include <stdio.h>
int main(){
    long long int a;
    int ans,c,k,t,cas=1;
    scanf("%d",&t);
while(t--){
        scanf("%lld",&a);
        ans=0;
    for(c=31;c>=0;c--){
                k = a >> c;
                if(k & 1)
                    ans++;
            }
        if(ans%2==0)
            printf("Case %d: even\n",cas++);
        else
            printf("Case %d: odd\n",cas++);

}
return 0;
}
