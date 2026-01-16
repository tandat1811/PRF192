#include <stdio.h>

int main(){
	int a,b;
	char phepToan;
	printf("Nhap 2 so a,b:");
	scanf("%d,%d", &a,&b);
	printf("Nhap phep toan:");
	fflush(stdin);  // tránh bị lưu enter vào char hoặc xóa vùng đệm
	scanf(" %c", &phepToan);
	if (phepToan == '/')
		if (b == 0)
			printf ("khong the chia cho so 0");
 	 else 
		printf("Ket qua: %d/%d = %f",a,b,(float)a/b);
 	
	return 0;
}
