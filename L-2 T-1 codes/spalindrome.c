/// mele nai.

#include <stdio.h>
#include <string.h>
int main(){
int i,j,len,res=0;
    char word[1001],rev_word[1001];
    while(scanf("%s",word)!=EOF){
        len=strlen(word);
        res=0;
        if(len>1){
            for(i=0,j=len-1;i<len;i++,j--){
                if(word[j]!='o' && word[j]!='O' && word[j]!='x'&& word[j]!='X' && word[j]!='b'&& word[j]!='d'&& word[j]!='p'&& word[j]!='q'&& word[j]!='w'&& word[j]!='W'&& word[j]!='M' && word[j]!='V' && word[j]!='v'){
                    res=0;
                    break;
                    }
                else{
                rev_word[i]=word[j];
                if(word[j]=='b') rev_word[i]=='d';
                if(word[j]=='d') rev_word[i]=='b';
                if(word[j]=='p') rev_word[i]=='q';
                if(word[j]=='q') rev_word[i]=='p';
                }
            }
            rev_word[i]='\0';
            if(!strcmp(word,rev_word))res=2;

            if(res==2){
                printf("TAK\n");
            }
            else{
                printf("NIE\n");
            }
        }
        else
            printf("NIE\n");
}
return 0;
}
