#include <stdio.h>

int main(){
	float a;	
	printf("Nhap so thuc:");
	scanf("%f",&a);
	printf("Gia tri da nhap: %.4f\n ", a);
	int phanNguyen = (int)a;
	printf("Phan nguyen la: %d\n",phanNguyen);
	float phanThuc = a-(int)a;
	printf("Phan thuc la: %.4f",phanThuc);
	return 0;
}