#include <stdio.h>

void encrypt_password(char*,int);

int main(){
    char _pass[8];
    int n;
    printf("Enter number & your password : ");
    while(scanf("%d",&n)!=EOF){
        gets(_pass);
        encrypt_password(_pass,n);
        printf("\nThe encrypted password is : ");
        puts(_pass);
        printf("\nThe decrypted password is : ");
        encrypt_password(_pass,n);
        puts(_pass);
        printf("\n\n");
    }
    return 0;
}
void encrypt_password(char *_pass,int n){
    while(*_pass != '\0'){
        *_pass++ ^= n;
    }
}
