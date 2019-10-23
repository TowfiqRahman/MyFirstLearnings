#include <stdio.h>
int main(){
    int n,i;
    char name[10][12];
    while(scanf("%d",&n)!=EOF){
        for(i=0;i<n;i++)
            scanf("%s",name[i]);
        for(i=0;i<n;i++)
            printf("%s\n",name[i]);
        printf("\n");
    }
    return 0;
}
