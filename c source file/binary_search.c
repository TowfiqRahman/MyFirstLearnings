/// data must be sorted.....


#include <stdio.h>
int main(){
    int num,hi_n,low_n,mid_n,arr[]={10,20,30,40,50,60,70,80,90,100};
    while(scanf("%d",&num)!=EOF){
        hi_n=9;
        low_n=0;
        while(low_n<=hi_n){
            mid_n=(hi_n + low_n)/2;
            if(num==arr[mid_n])
                break;
            else if(num<arr[mid_n])
                hi_n=mid_n - 1;
            else
                low_n=mid_n + 1;
        }
        if(low_n>hi_n)
            printf("\t%d is not found in array.. ;|\n\n",num);
        else
            printf("\t%d is found in the array, it's the %dth element in the array\n\n",arr[mid_n],mid_n);
    }
    return 0;
}
