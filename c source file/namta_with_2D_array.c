#include <stdio.h>
int main(){
    int namta[10][10],row,col,jor=0,bjor=0,sum=0;
    for (row = 0; row < 10; row++){
        for(col = 0; col < 10; col++){
        namta[row][col] = (row + 1) * (col + 1);
        sum+=namta[row][col];
        if(namta[row][col]%2==0)
            jor++;
        else    bjor++;
        }
    }
    for (row = 0; row < 10; row++){
        for(col = 0; col < 10; col++)
        printf("\t%2d x %2d = %2d\n\n", (row + 1), (col + 1), namta[row][col]);
    printf("\n");
    }
    printf("\tJor = %2d\tBjor = %2d\tsummation = %2d",jor,bjor,sum);
    return 0;
}
