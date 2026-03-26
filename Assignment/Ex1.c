#include <stdlib.h>
#include<stdio.h>

int main() {
  FILE *fptr;
  int n;
  
  // Ghi du lieu
  
	fptr = fopen("bai1.txt","w");
	
	if(fptr == NULL){
		printf("Khong mo duoc file\n");
	}else {
		printf("mo thanh cong\n");
	}
	
	printf("nhap n:");
	scanf("%d",&n);
	fprintf(fptr, "So n: %d",n);
	
	fclose(fptr);
	
	//  Doc file
	
	fptr = fopen("Ex1.txt", "r");
	
	if(fptr == NULL){
		printf("Khong mo duoc file");
		exit(1);
	}
	
	char s;
	
	do{
		s = getc(fptr);
		printf("%c",s);
	} while(s!= EOF);
	
	fclose(fptr);

	return 0;
}
