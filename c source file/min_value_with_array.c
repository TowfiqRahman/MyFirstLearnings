#include <stdio.h>
int min(int arr[]);
int main(){
    int arr[]={15,20,30,40,50,60,10,80,90,100};
    printf("min value :%d",min(arr));
    return 0;
}
int min(int arr[]){
    int i,min;
    min=arr[0];
    for(i=0;i<10;i++){
        if(arr[i]<min)
            min=arr[i];
    }
    return min;
}
