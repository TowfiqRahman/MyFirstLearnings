#include <stdio.h>
#include <string.h>
int dp[10001];
long long int a, b, c, d, e, f;
long long int fn( int n ) {
    if( n == 0 ) return a;
    if( n == 1 ) return b;
    if( n == 2 ) return c;
    if( n == 3 ) return d;
    if( n == 4 ) return e;
    if( n == 5 ) return f;
    if(dp[n]!=-1)return dp[n];
    else{
        dp[n]=(fn(n-6) + fn(n-5) + fn(n-4) + fn(n-3) + fn(n-2) + fn(n-1))%10000007;
    return dp[n];
    }
}
int main() {
    int i, caseno = 0, cases;
    unsigned int n;
    scanf("%d", &cases);
    while( cases-- ) {
        for(i=0;i<10001;i++){
        dp[i]=-1;
        }
        scanf("%lld %lld %lld %lld %lld %lld %u", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %d: %d\n", ++caseno,fn(n)%10000007);
    a=b=c=d=e=f=0;
    }
    return 0;
}
