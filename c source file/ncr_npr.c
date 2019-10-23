#include <stdio.h>
long factorial(int);
long find_ncr(int,int);
long find_npr(int,int);

int main(){
    int r,n;
    long int ncr,npr;
    while(scanf("%d %d",&n,&r)!=EOF){
        ncr=find_ncr(n,r);
        npr=find_npr(n,r);
        printf("%dC%d= %ld\n",n,r,ncr);
        printf("%dP%d= %ld\n",n,r,npr);
    }
    return 0;
}
long int find_ncr(int n,int r){
    long int result;

    result=factorial(n)/factorial(r)/factorial(n-r);
    return result;
}
long int find_npr(int n,int r){
    long result;
    result=factorial(n)/factorial(n-r);
    return result;
}
long int factorial(int n){
    int c;
    long long int result=1;
    for(c=2;c<=n;c++){
        result=result*c;
    }
    return result;
}
