///milla gese cf 688A
#include <stdio.h>
int main(){
int i,j,n=0,d=0,p=0,count=0,ccount=0,r=0;
while(scanf("%d",&n)!=EOF){
    scanf("%d",&d);
    ccount=0;
    r=0;
    for(i=0;i<d;i++){
        count=0;
        for(j=0;j<n;j++){
            scanf("%1d",&p);
            if (p==0){
                count=1;
            }
        }
        if(count==1){
            ccount++;
            if(r<ccount){r=ccount;}
        }
        else{
            ccount=0;
        }
    }
    printf("%d\n",r);
}
return 0;
}
