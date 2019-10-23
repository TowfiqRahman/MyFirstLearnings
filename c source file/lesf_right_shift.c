#include <stdio.h>

int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        printf("Number :%d\n\n Left shift : %d\n\nNumber : %d\n\nRight shift : %d\n",n,n<<1,n,n>>1);
    }

    return 0;
}
