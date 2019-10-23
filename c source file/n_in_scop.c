#include <stdio.h>
int main (){
    int n=10;
    printf(" \tin main %d\n",n);
    if(n<=10){
        int n=20;
        printf("\n\t\tin scop %d\n",n);
    }
    printf("\n\tafter scop %d\n",n);
    return 0;
}
