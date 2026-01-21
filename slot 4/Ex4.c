#include <stdio.h>

int main(){
	int a,b;
<<<<<<< HEAD
	char kytu;
	printf("Nhap 2 so a,b:");
	scanf("%d,%d", &a,&b);
	printf("Nhap phep toan:");
	scanf(" %c", &kytu);
	if (kytu == '/')
=======
	char phepToan;
	printf("Nhap 2 so a,b:");
	scanf("%d,%d", &a,&b);
	printf("Nhap phep toan:");
	fflush(stdin);  // tránh bị lưu enter vào char hoặc xóa vùng đệm
	scanf(" %c", &phepToan);
	if (phepToan == '/')
>>>>>>> caaedc7d124336106fcf8a532a61e9c20d878626
		if (b == 0)
			printf ("khong the chia cho so 0");
 	 else 
		printf("Ket qua: %d/%d = %f",a,b,(float)a/b);
 	
	return 0;
<<<<<<< HEAD
}
=======
}
>>>>>>> caaedc7d124336106fcf8a532a61e9c20d878626
