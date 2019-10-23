#include<stdio.h>
struct s{
    char name[15];
    int roll;
    int batch;
};
int main()
{
    struct s b[10];
    int i,n;
    FILE *fptr;
    printf("enter number of students:");
    scanf("%d",&n);
    if((fptr=fopen("text.txt","r+"))==NULL){
        printf ("Error!");
        exit(1);
    }
    else
    {
        for(i=0;i<n;i++){
            fscanf(fptr,"%s\t%d\t%d",&b[i].name,&b[i].roll,&b[i].batch);
            }
            printf("Name\tRoll\tBatch\n");
        for(i=0;i<n;i++){
            printf("%s\t%d\t%d\n",b[i].name,b[i].roll,b[i].batch);
        }
    }
    fclose(fptr);
    return 0;
}
