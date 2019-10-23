#include<stdio.h>
int main (){
    int i,row,col,sum_r,sum_c=0,arr[5][5]={{6,4,7,8,9},{3,7,1,9,9},{8,6,4,2,7},{2,4,2,5,9},{4,1,6,7,3}};
    printf("Array : .....\n\t");
    for(row=0;row<5;row++){
        sum_r=0;
        for(col=0;col<5;col++){
            printf("%2d",arr[row][col]);
            sum_r+=arr[row][col];
        }
        printf("\n\tSum of row %d = %2d \n\n\t",row+1,sum_r);
    }
    for(col=0;col<5;col++){
        sum_c=0;
        for(row=0;row<5;row++)
            sum_c+=arr[row][col];
        printf("\n\tSum of col %d : %2d\n\n",col+1,sum_c);
    }
    sum_c=0;
    for(row=0,col=0;row==col && row<5 && col<5;row++,col++)
        sum_c+=arr[row][col];
    printf("\tFor 1st diagonal sum = %d\n\n",sum_c);
    sum_r=0;
    for(row=4,col=0;row>=0 && col<5;row--,col++)
        sum_r+=arr[row][col];
    printf("\tSum of reverse diagonal = %2d",sum_r);
    return 0;
}
