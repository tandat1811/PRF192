#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    // tạo số ngẫu nhiên từ 1 đến 10
    int soNgauNhien = 1 + rand() % (10 - 1 + 1);

    int n = 0;

    for( ; n != soNgauNhien ; ){
        printf("Nhap so: ");

        if(scanf("%d", &n) != 1 || n < 1 || n > 10){
            printf("Nhap sai! Vui long nhap lai.\n");
            while(getchar() != '\n');
            continue;
        }

        if(n > soNgauNhien){
            printf("Nho hon\n");
        }else if(n < soNgauNhien){
            printf("Lon hon\n");
        }
    }

    printf("Ban da doan dung!");
    return 0;
}