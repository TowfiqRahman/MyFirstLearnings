///bubble sort..
#include <stdio.h>

int main(){
    int n,i,j,k,temp;
    char a[30];

    while(scanf("%d",&n)!=EOF){
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);

        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                if (a[i]>a[j]){
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
                /*for(k=0;k<n;k++)
                    printf("%3d",a[k]);
                printf("\n");*/
            }
            //printf("\n");
        }
        for(k=0;k<n;k++)
            printf("%3d",a[k]);
        printf("\n");
    }
    return 0;
}
