#include <stdio.h>

int main (){
    char name[3][10]={"TOWFIQ","RAHMAN",{'C','U','E','T'}};
    int i;

   /* for(i=0;i<3;i++){
        scanf("%s\n",name[i]);
    }*/
    for(i=0;i<3;i++){
        printf("%s\n",name[i]);
    }
    return 0;
}
