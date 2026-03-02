#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int so_bi_mat, du_doan, so_lan = 7;

    srand(time(NULL));
    so_bi_mat = rand() % 100 + 1;

    while (so_lan > 0) {
        printf("Nhap so du doan (1-100): ");
        scanf("%d", &du_doan);

        if (du_doan < 1 || du_doan > 100) {
            printf("So ngoai pham vi!\n");
            continue;
        }

        if (du_doan == so_bi_mat) {
            printf("Chuc mung! Ban doan dung!\n");
            return 0;
        }
        else if (du_doan > so_bi_mat)
            printf("So nho hon!\n");
        else
            printf("So lon hon!\n");

        so_lan--;
        printf("Con %d lan thu\n", so_lan);
    }

    printf("Ban thua! So dung la %d\n", so_bi_mat);
    return 0;
}