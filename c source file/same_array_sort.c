#include <stdio.h>
int main(){
    int temp,i,j,arr[]={10,20,30,40,50,60,70,80,90,100};
    printf("Before sorting : .....                      & After sorting ....\n\n");
    for(i=0;i<10;i++)
        printf("%4d",arr[i]);
    for(i=0,j=9;i<5;i++,j--){
        temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
        }
    printf("\n\n");
    for(i=0;i<10;i++)
        printf("%4d",arr[i]);
    return 0;
}
