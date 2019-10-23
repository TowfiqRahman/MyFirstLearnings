#include<stdio.h>
struct s{
    char name[15];
    int roll;
    int batch;
};
int main()
{
    struct s a[10],b[10];
    int i,n,p;
    FILE *fptr;
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
    if((fptr=fopen("text.txt","w+"))==NULL){
        printf("error!Opening file");
        exit(1);
    }
    else
    {
        for(i=0;i<n;i++){
            fprintf(fptr,"%s\t%d\t%d",a[i].name,a[i].roll,a[i].batch);
        }
    }
    fclose(fptr);
    if((fptr=fopen("text.txt","r+"))==NULL){
        printf ("Error!");
        exit(1);
    }
    else
    {
        for(i=0;i<n;i++){
            fscanf(fptr,"%s\t%d\t%d",&b[i].name,&b[i].roll,&b[i].batch);
            }
        for(i=0;i<n;i++){
            printf("%s\t%d\t%d\n",b[i].name,b[i].roll,b[i].batch);
        }
    }
    fclose(fptr);
    return 0;
}
