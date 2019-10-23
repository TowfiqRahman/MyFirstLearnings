#include<stdio.h>
struct s{
    char name[8];
    int roll;
    int batch;
};
int main()
{
    struct s a[10];
    int i,n;
    printf("enter number of students:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter name:");
        scanf("%s",&a[i].name);
        printf("enter roll:");
        scanf("%d",&a[i].roll);
        printf("enter batch:");
        scanf("%d",&a[i].batch);
    }
    for(i=0;i<n;i++){
        printf("name:%s",a[i].name);
        printf("roll:%d",a[i].roll);
        printf("batch:%d\n",a[i].batch);
    }
    return 0;
}
