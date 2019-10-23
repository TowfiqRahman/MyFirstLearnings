#include <stdio.h>
#include <string.h>
int main(){
    int t,n,cas=1;
    long long int money1,money;
    char arr[7];
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        money=0;
        printf("Case %d:\n",cas++);
        while(n--){
            scanf("%s",arr);
            if(!strcmp(arr,"donate")){
                scanf("%lld",&money1);
                money+=money1;
            }
            else{printf("%lld\n",money);
            }
        }
    }
return 0;
}
