	#include <stdio.h>

float tinh_tien_taxi(float so_km) {
    if (so_km <= 1)
        return 15000;
    else if (so_km <= 30)
        return 15000 + (so_km - 1) * 12000;
    else
        return 15000 + 29 * 12000 + (so_km - 30) * 10000;
}

int main() {
    float so_km;

    printf("Nhap so kilomet: ");
    scanf("%f", &so_km);
    if(so_km < 0){
    	printf("Khong hop le");
    	return 0;
	}

    printf("Tien phai tra: %.0f VND\n", tinh_tien_taxi(so_km));

    return 0;
}
