#include <stdio.h>

void show_menu() {
    printf("\n===== MAY TINH BO TUI =====\n");
    printf("1. Cong (+)\n");
    printf("2. Tru (-)\n");
    printf("3. Nhan (*)\n");
    printf("4. Chia (/)\n");
    printf("0. Thoat\n");
}
void processor() {
    int lua_chon;
    float so_a, so_b;

    do {
        show_menu();

        printf("Nhap lua chon: ");
        scanf("%d", &lua_chon);

        if (lua_chon == 0) {
            printf("Thoat chuong trinh\n");
            break;
        }

        printf("Nhap so thu nhat: ");
        scanf("%f", &so_a);

        printf("Nhap so thu hai: ");
        scanf("%f", &so_b);

        switch (lua_chon) {
            case 1:
                printf("Ket qua: %.2f\n", so_a + so_b);
                break;

            case 2:
                printf("Ket qua: %.2f\n", so_a - so_b);
                break;

            case 3:
                printf("Ket qua: %.2f\n", so_a * so_b);
                break;

            case 4:
                if (so_b != 0)
                    printf("Ket qua: %.2f\n", so_a / so_b);
                else
                    printf("Khong the chia cho 0\n");
                break;

            default:
                printf("Lua chon khong hop le\n");
        }

    } while (1);
}
int main() {
    processor();
    return 0;
}
