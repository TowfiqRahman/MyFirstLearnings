#include <stdio.h>
int main() {
    int ara1[5][5] = {{1, 2, 3, 4, 5}, {10, 20, 30, 40, 50}, {100, 200, 300, 400, 500}, {1000, 2000, 3000, 4000, 5000}, {10000, 20000, 30000, 40000, 50000}};
    int ara2[5][5];
    int r, c;
    printf("Content of first array (ara1): \n\t");
    for (r = 0; r < 5; r++) {
        for(c = 0; c < 5; c++) {
            printf("%5d ", ara1[r][c]);
            }
        printf("\n\t");
    }
    printf("\n\n\t");
    // now start copy
    for (r = 0; r < 5; r++) {
        for(c = 0; c < 5; c++) {
            ara2[c][r] = ara1[r][c];
        }
    }
    printf("Content of second array (ara2): \n\n\t");
    for (r = 0; r < 5; r++) {
        for(c = 0; c < 5; c++) {
            printf("%2d ", ara2[r][c]);
        }
        printf("\n\t");
    }
    return 0;
}
