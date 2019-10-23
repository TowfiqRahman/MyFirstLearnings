#include <stdio.h>
int main(){
int i,j=10,n,cont;
while(scanf("%d",&n)==1){
    cont=0;
    for(i=0;i<n;i++){
        scanf("%d",&j);
        if(j==0)
        cont++;
    }
    if(n==1){
        if(j==1)
        printf("YES\n");
    else{
        printf("NO\n");}
    }
    else{
        if(cont==1){
        printf("YES\n");}
    else{
        printf("NO\n");}
    }
}
return 0;
}
