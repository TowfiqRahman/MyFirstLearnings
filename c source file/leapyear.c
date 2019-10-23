#include <stdio.h>
int main (){
    int year;
    printf("\n please enter year: \n");
    while(scanf("%d",&year)!=EOF){
        if(year%4==0 && year%100!=0 || year%400==0)
            printf("\n\t%d IS LEAP YEAR!!!!!!\n",year);
        else
            printf("\n\t%d is not leap year :( .....\n",year);
    }
    return 0;
}
