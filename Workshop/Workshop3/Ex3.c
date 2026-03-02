#include <stdio.h>

float tinh_luong(float so_gio, float luong_moi_gio) {
    if (so_gio <= 40)
        return so_gio * luong_moi_gio;
    else
        return 40 * luong_moi_gio + (so_gio - 40) * luong_moi_gio * 1.5;
}

int main() {
    float so_gio, luong_moi_gio;

    printf("Nhap so gio lam: ");
    scanf("%f", &so_gio);

    printf("Nhap luong moi gio: ");
    scanf("%f", &luong_moi_gio);

    printf("Tong luong: %.0f VND\n", tinh_luong(so_gio, luong_moi_gio));

    return 0;
}
