#include <stdio.h>
#include <math.h>

int la_so_nguyen_to(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return 0;
    return 1;
}

int main() {
    int a, b;

    printf("Nhap so a: ");
    scanf("%d", &a);

    printf("Nhap so b: ");
    scanf("%d", &b);

    printf("Cac so nguyen to trong [%d, %d]:\n", a, b);

    for (int i = a; i <= b; i++) {
        if (i != 2 && i % 2 == 0)
            continue;

        if (la_so_nguyen_to(i))
            printf("%d ", i);
    }

    return 0;
}