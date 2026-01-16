#include <stdio.h>

int main(){
	int a, b;
	printf("Nhap vao so a va b :");
	int kq = scanf("%d %d",&a,&b);
	if (kq>0){
		printf ("Kq cua scanf : %d\n", kq);
		printf ("a =%d\n, b =%d\n", a,b);
	} else {
		printf ("Nhap bi sai roi\n");
	}
	printf("Bai tap voi ham scanf");
	return 0;
}