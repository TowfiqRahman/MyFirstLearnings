#include<stdio.h>
int main(){
    long long int n;
    int c,k;
    printf("Enter decimal number: ");
    while(scanf("%lld",&n)!=EOF){
        printf("%d in binary is : ",n);
        for(c=7;c>=0;c--){
            k = n >> c;
            if(k & 1)
                printf("1");
            else
                printf("0");
        }
        printf("\n");
    }
    getchar();
    return 0;
}
