#include <stdio.h>
int main (){
    int n;
    while(scanf ("%d",&n)!=EOF){
        printf("\tvalue of input n : %d\n",n);
        printf("\tn : %d   n++ : %d   ++n : %d \n",n,n++,++n);
        printf("\tn : %d   n-- : %d   --n : %d \n",n,n--,--n);
    }
    return 0;
}
