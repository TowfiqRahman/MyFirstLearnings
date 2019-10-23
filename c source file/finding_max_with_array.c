#include <stdio.h>
int find_max(int arr[]);
int main(){
    int arr[]={6,8,9,3,4,12,45,67,99,234};
    printf("%d",find_max(arr));
    return 0;
}
int find_max(int arr[]){
    int i,max;
    max=arr[0];
    for(i=0;i<10;i++){
        if(arr[i]>max)
            max=arr[i];
    }
    return max;
}
