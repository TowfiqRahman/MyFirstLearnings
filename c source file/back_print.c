#include <stdio.h>
#include <conio.h>  //not valid
void back_print(void){
    char ch;
    if(ch = (getchar(ch)) != '\n' )
        back_print();
    putchar(ch);
}
int main(){
    back_print();
    return 0;
}
