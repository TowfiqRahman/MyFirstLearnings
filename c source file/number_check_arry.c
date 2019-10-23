#include <stdio.h>
int main(){
    int i,j,m_c[11],t_m[]={7,6,5,3,2,7,8,9,6,2,1};
    for(i=0;i<=11;i++){
        m_c[i]=0;
    }
    for(i=0;i<12;i++)
        m_c[t_m[i]]++;
    for(j=0;j<=10;j++){
            printf("for marks %3d : %3d",j,m_c[j]);
        printf("\n\n");
    }
    return 0;
}
