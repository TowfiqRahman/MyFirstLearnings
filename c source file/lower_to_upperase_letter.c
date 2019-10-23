#include <stdio.h>
char upper_case(char);
int main(){
    char lower,letter;
    while( scanf("%c",&lower) != EOF ){
        letter = upper_case(lower);
        printf("\n\t The upper case of %c is : %c ",lower,letter);
    }
    return 0;
}
char upper_case(char ch){
    if(ch>='a' && ch<='z')
        return ('A'+ ch -'a');
    else
        return ch;
}
