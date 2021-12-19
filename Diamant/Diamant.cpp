#include <stdio.h>

int main()
{
    for (int a = 1; a <= 9; a++) {
        int i = 9 - a;
        for (int b = 8; b >= a; b--) {
            printf("  ");
        }
        for (int c = 1; c <= 1; c++) {
            for (int d = 9; d > 0; d--) {
                if (d - i > 0) {
                    printf("%2d", d - i);
                }
            }
        }
        for (int e = 1; e <= 1; e++) {
            for (int f = 1; f <= a; f++) {
                if (f > 1) {
                    printf("%2d", f);
                }
            }
        }
        printf("\n");
    }
    for (int a = 1; a <= 9; a++) {
        int i = 9 - a;
        for (int b = 1; b <= a; b++) {
            printf("  ");
        }
        for (int c = a; c <= a; c++) {
            for (int d = i; d > 0; d--) {
                printf("%2d", d);
            }
        }
        for (int e = i; e >= i; e--) {
            for (int f = 2; f <= e; f++) {
                printf("%2d", f);
            }
        }
        printf("\n");
    }
}
