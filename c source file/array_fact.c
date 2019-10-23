#include <stdio.h>

int main(){
    char a[5][30];
    int n;
    scanf("%d",&n);
    while(n--)
        a[0][0]=n*n-1;
    printf("%s",a[0][0]);
    return 0;
}
