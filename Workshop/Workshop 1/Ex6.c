#include <stdio.h>;

int main (){
	float chuyenCan, giuaKy, cuoiKy;
	float Tong;
	char diemChu;
	+
	printf("Nhap diem chuyen can: ");
	if(scanf("%f",&chuyenCan) != 1){
	printf("Khong tinh duoc!!");
	return 0;
}
	printf("Nhap diem giua ky: ");
	if(scanf("%f",&giuaKy) != 1){
	printf("Khong tinh duoc!!");
	return 0;
}
	printf("Nhap diem cuoi ky: ");
	if(scanf("%f",&cuoiKy) != 1){
	printf("Khong tinh duoc!!");
	return 0;
}

	Tong =((chuyenCan * 0.1) + (giuaKy * 0.3) + (cuoiKy * 0.5));
	    if (Tong >= 8.5 && Tong <= 10)
        diemChu = 'A';
    else if (Tong >= 7.0 && Tong < 8.5)
        diemChu = 'B';
    else if (Tong >= 5.5 && Tong < 7.0)
        diemChu = 'C';
    else if (Tong >= 4.0 && Tong < 5.5)
        diemChu = 'D';
    else
        diemChu = 'F';
   	printf("%.1f", Tong);
    printf("\nDiem chu: %c", diemChu);
    if (chuyenCan >= 4.0 && giuaKy >= 4.0 && cuoiKy >= 4.0 && diemChu != 'F') {
        printf("\n=> Du dieu kien tot nghiep");
    } else {
        printf("\n=> Khong du dieu kien tot nghiep");
    }
	return 0;
}