#include <stdio.h>
#include <math.h>

int main(){
    float n;
    while(scanf("%f",&n)!=EOF)
        printf("%0.2f\n\n",sqrt(n));
    return 0;
}
