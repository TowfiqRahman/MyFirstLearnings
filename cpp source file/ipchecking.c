#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
int i,k,c,t,a[5],p,cas=1;
char arr1[36],arr2[36];
scanf("%d",&t);
while(t--){
    scanf("%d.%d.%d.%d",&a[0],&a[1],&a[2],&a[3]);
    scanf("%s",arr2);
    p=0;
    for(i=0;i<4;i++){
        for(c=7;c>=0;c--){
                k = a[i] >> c;
                if(k & 1){
                    arr1[p++]='1';
                }
                else{
                    arr1[p++]='0';
                }
            }
        if(i<3){arr1[p++]='.';}
    }
    arr1[p]='\0';
    if(!strcmp(arr1,arr2)){
        printf("Case %d: Yes\n",cas++);
    }
    else{printf("Case %d: No\n",cas++);
    }

}

return 0;
}
