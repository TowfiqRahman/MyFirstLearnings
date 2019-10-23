///mile nai.
#include <stdio.h>

int main(){
char a[129]="\0";
int i,t,count;
scanf("%d",&t);
while(t--){
    a[129]="\0";
    count=0;
    scanf("%s",a);
    for(i=0;i<128;i++){
        if(a[i]=='(' || a[i]=='['){
            count++;
            }
        if(a[i]==')' || a[i]==']'){
            count--;}
    }
    if (count==0){
        printf("Yes\n");
        }
    else
        printf("No\n");
}
return 0;
}
