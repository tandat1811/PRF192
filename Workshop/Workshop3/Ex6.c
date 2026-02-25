#include <stdio.h>

int main() {
    int n;
    long long kq = 0;

    printf("Nhap vao so thap phan: ");

    
    for( ; scanf("%d",&n) != 1 ; ){
        printf("Nhap sai roi, hay nhap lai:");
        while(getchar() != '\n');
    }

    long long bac = 1;
    
    for( ; n > 0 ; n = n / 2 ){
        int soDu = n % 2;
        kq = kq + (soDu * bac);
        bac = bac * 10;
    }

    printf("He nhi phan: %lld", kq);
    return 0;
}