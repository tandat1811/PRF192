#include <stdio.h>

int main(){
	float soKm;
	int thoiGian;
	float Money;
	printf("Nhap so Km: ");
	
	if(scanf("%f", &soKm) != 1 || soKm <= 0 ){
		printf("Khong tinh duoc");
		return 0;
	}
	printf("Nhap thoi gian cho: ");
	scanf("%d", &thoiGian);
	float tong;
	
	if(soKm <= 0.5){
		Money = 12000;
	} else if (soKm > 0.5 && soKm <= 30){
		Money = 12000 + ((soKm - 0.5) * 15000);
	} else {
		Money = 12000 + 29.5 * 12000 + ((soKm - 30) * 12000);
	}
	tong = Money;
	if(thoiGian > 5){
		tong = (thoiGian - 5) * 1000 + Money;
	}
	
	printf("%-15s %-15s %-15s\n", "So Km", "Thoi gian cho", "Thanh tien");
	printf("%-15.1f %-15d %-15.0f",soKm,thoiGian,tong);
	return 0;
}
