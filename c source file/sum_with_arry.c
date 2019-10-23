#include <stdio.h>
int sum(int arr[]);
int main(){
    int arr[]={10,20,30,40,50,60,70,80,90,100};
    printf("%d",sum(arr));
    return 0;
}
int sum(int arr[]){
    int i,sum=0;
    for(i=0;i<10;i++)
        sum+=arr[i];
    return sum;
}
