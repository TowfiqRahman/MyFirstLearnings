#include <bits\stdc++.h>
int num=1;
void swap(char *a, char *b) {
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void print(char *a, int i, int n) {
    int j;

    if(i == n) {
        printf("%ld : %s\n", num++,a);
    } else {
        for(j = i; j <= n; j++) {
            swap(a + i, a + j);
            print(a, i + 1, n);
            swap(a + i, a + j);
        }
    }
}

int main(void) {
    char a[100];
    gets(a);
    print(a, 0, strlen(a) - 1);
    return 0;
}
