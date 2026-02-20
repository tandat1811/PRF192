#include <stdio.h>

int main (){
	int n;
	int tong = 0;
	do 	{
		
	while(printf("Nhap cac so nguyen duong n(nhap 0 de thoat):"), scanf("%d",&n) == 1 && n != 0){
		if(n > 0){
			tong = tong + n;
		} else {
			printf("Khong duoc tinh, nhap lai!!\n");
		}
	}
	}while(n != 0);
	printf("Tong cac so da tinh la:%d",tong);
	
	return 0;
}
