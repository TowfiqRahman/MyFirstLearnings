#include <stdio.h>
#include <string.h>

int main(){
    int i,j,len;
    char word[30],rev_word[30];
    scanf("%s",word);
    strcpy(rev_word,word);
    strrev(rev_word);
    /*len=strlen(word);
    for(i=0,j=len-1;i<len;i++,j--)
        rev_word[i]=word[j];
    rev_word[i]='\0';
    printf("\treverse word :%s\n\n",rev_word);*/
    if(!strcmp(word,rev_word)){
        printf("\t%s is a palindrome\n",word);
    }
    else{
        printf("\t%s is not palindrome\n",word);
    }
    return 0;
    }
