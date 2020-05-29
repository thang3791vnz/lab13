#include <stdio.h>
#include <stdlib.h>

typedef struct NhanVien //struct khai bao nhan vien
{
	char hoten[100];
	char chucvu[60];
	int tuoi[30];
	int thamnien[30];
	int tienluong[100];
} NhanVien;

void xuat(NhanVien NV) //  ham khai bao nhan vien
{
	printf("Ho Ten: %s\n", NV.hoten);
	printf("Chuc vu: %s", NV.chucvu);
	printf("Tuoi: %d", NV.tuoi);
	printf("Tham nien: %d\n", NV.thamnien);
	printf("Tien luong: %d\n", NV.tienluong);
}

NhanVien ds[5]; // danh sach nhan vien gom 5 nguoi

int main()// entry point
{
	printf("Danh Sach Nhan Vien Sua Dieu Hoa\n");
	int i;
	for(i = 0; i < 5; i++)
	{
		printf("Nhan vien sua dieu hoa thu %d \n", i + 1);
		fflush(stdin);
		char temp[30];
		
		printf("Ten: ");
		gets(ds[i].hoten);
		
		printf("Chuc vu: ");
		gets(ds[i].chucvu);
		
		printf("Tuoi: ");
		scanf("%d", &ds[i].tuoi);
		//gets(temp);
		//ds[i].tuoi = atoi(temp); // atoi: nhan vao 1 gia tri chuoi~ char, tra ve gia tri so nguyen tuong ung. ne
		
		printf("Tham nien: ");
		scanf("%d", &ds[i].thamnien);
		//gets(temp);
		//ds[i].thamnien = atoi(temp);
		
		printf("Tien luong: ");
		scanf("%d", &ds[i].tienluong);
		//gets(temp);
		//ds[i].tienluong = atoi(temp);
	}
	for(i = 0; i < 5; i++) // lap lai dieu kien
	{
		if(ds[i].tienluong <= 2000) ds[i].tienluong += ds[i].tienluong *15/100;
		else
		if(ds[i].tienluong > 2000 && ds[i].tienluong <= 5000) ds[i].tienluong += ds[i].tienluong * 10/100;
	}
	for(i = 0; i < 10; i++)
	{
		xuat(ds[i]); // xuat ra danh sach nhan vien
	}
	for(i = 0; i < 5; i++)
	{
		if(ds[i].thamnien > 10) xuat(ds[i]); // kiem tra ai du 10 nam
	}
	getch();
}
