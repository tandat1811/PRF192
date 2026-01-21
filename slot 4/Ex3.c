#include <stdio.h>

int main(){
	float a;	
<<<<<<< HEAD
	printf("Nhap so thuc:");
	scanf("%f",&a);
	printf("Gia tri da nhap: %.4f\n ", a);
	int phanNguyen = (int)a;
	printf("Phan nguyen la: %d\n",phanNguyen);
	float phanThuc = a-(int)a;
	printf("Phan thuc la: %.4f",phanThuc);
=======
	printf("Nhap so thuc :");
	scanf("%f",&a);
	printf("Gia tri da nhap : %.4f\n ", a);
	int phanNguyen = (int)a;
	printf("Phan nguyen la : %d\n",phanNguyen);
	float phanThuc = a-(int)a;
	printf("Phan thuc la : %.4f",phanThuc);
>>>>>>> caaedc7d124336106fcf8a532a61e9c20d878626
	return 0;
}