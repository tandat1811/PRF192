#include <stdio.h>

int main (){
	float chuyenCan, giuaKy, cuoiKy;
	float Tong;
	char diemChu;
	
	printf("Nhap diem chuyen can, giua ky, cuoi ky:");
	int kq = scanf("%f %f %f",&chuyenCan, &giuaKy, &cuoiKy);
	printf("kq nhap: %d",kq);
	if(kq !=3 || chuyenCan <0 || giuaKy<0 || chuyenCan <0 ||cuoiKy<0 ||chuyenCan >10 ||giuaKy>10 ||cuoiKy>10)
	{
		printf("\nNhap sai diem, diem >=0!");
		return 0;
	}
	Tong =((chuyenCan * 0.1) + (giuaKy * 0.3) + (cuoiKy * 0.6));
	    if (Tong >= 8.5 )
        diemChu = 'A';
    else if (Tong >= 7.0 )
        diemChu = 'B';
    else if (Tong >= 5.5 )
        diemChu = 'C';
    else if (Tong >= 4.0 )
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