#include <stdio.h>

int main() {
    int a, b;
    float kq;
    char phepToan;
    int soDu;

    scanf("%d,%d", &a, &b);   
    scanf(" %c", &phepToan);  

    switch (phepToan) {
        case '+':
            kq = a + b;
            break;

        case '-':
            kq = a - b;
            break;

        case '*':
            kq = a * b;
            break;

        case '%':
            if (b == 0) {
                printf("Khong the chia cho 0!");
                return 0;
            }
            soDu = a % b;
            printf("%d %c %d = %d", a, phepToan, b, soDu);
            return 0;

        case '/':
            if (b == 0) {
                printf("Khong the chia cho 0!");
                return 0;
            }
            kq = (float)a / b;
            printf("%d %c %d = %.2f", a, phepToan, b, kq);
            return 0;

        default:
            printf("Phep toan khong hop le!");
            return 0;
    }
    printf("%d %c %d = %.0f", a, phepToan, b, kq);

    return 0;
}