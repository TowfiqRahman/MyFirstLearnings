///bitwise & | ^
#include <stdio.h>
int main(){
    int i,j;
    while(scanf("%d%d",&i,&j)!=EOF){
        printf("\ni & j : %d\n",i&j);
        printf("\ni | j : %d\n",i|j);
        printf("\ni + j : %d\n",i+j);
        printf("\ni ^ j : %d\n",i^j);
        //printf("i - j : %d\n",i-j);
    }
    printf("\n");
    return 0;
}
