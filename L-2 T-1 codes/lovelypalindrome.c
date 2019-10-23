///hoynai..
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main(){
string arr,revarr;
while(scanf("%s",arr)!=EOF){
    strcpy(revarr,arr);
    strrev(revarr);
    strcat(arr,revarr);
    printf("%s\n",arr);
}
return 0;
}
