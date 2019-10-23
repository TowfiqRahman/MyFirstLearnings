
//kaj kortes na......


#include <stdio.h>
int main(){
    freopen("G:\\ cpp source file\\in.txt", "rt", stdin);
    freopen("G:\\ cpp source file\\out.txt", "wt", stdout);
    int num1,num2,sum;
    while(2== scanf("%d%d",&num1,num2)){
        sum=num1+num2;
        printf("Sum is : %d",sum);
    }
    return 0;
}
