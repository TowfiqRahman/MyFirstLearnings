#include <stdio.h>
void floyd(int);
int main(){
    int n;
    while(scanf("%d",&n)!=EOF)
        floyd(n);
    return 0;
}
void floyd(int n){
    static int r=1,c=1;
    int i;
    if(n<=0){
        r=1;c=1;
        return;
        }
    for(i=1;i<=r;i++)
        printf("%4d",c++);
    printf("\n\n");
    r++;
    floyd(--n);
}
