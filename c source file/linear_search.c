#include <stdio.h>
int main(){
    int arr[10],i,j=1,key=0,n;///loc,ck;

    while(scanf("%d",&n)!=EOF){
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        scanf("%d",&key);

        ///loc=0;
        for(i=0;i<n;i++){
            if(arr[i]==key){
                ///ck=1
                ///loc=i+1;
                break;
            }
        }
        printf("case %d: ",j++ );
        if(i==n)
            printf("NO\n");
        else
            printf("%d\n",i+1);
    }
    return 0;
}
