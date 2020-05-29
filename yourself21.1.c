#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TEN_TAP_TIN           "file.txt" 
//  no duoc goi la macro, trinh bien dich se thay toan bo ve trai cua macro bang ve phai < file.txt >
// neu gap TEN_TAP_TIN thi trinh bien dich se thay the thanh "file.txt"


void nhapDLvaoTapTin()
{
	FILE* filePtr = fopen(TEN_TAP_TIN, "wt"); // tao 1 file, "wt" cho biet file nay se duoc ghi duoi dang van ban.
	if(filePtr == NULL)
	{
		printf("LOI: Khong the mo tap tin!\n");
		exit(1);	// thoát ct voi ma~ 1;
	}
	
	char dulieu[128];
	printf("Xin moi nhap du lieu: ");
	gets(dulieu);	// nhap du lieu can ghi vao file
	fputs(dulieu, filePtr); // ghi du lieu vao file	
	fclose(filePtr); // dong tap tin, neu khong dong tap tin se khong the duoc truy cap boi cac phan mem khac.
}
void inChungNoRaNguocLai()
{
	FILE* filePtr = fopen(TEN_TAP_TIN, "rt"); // dung "rt" cho biet ta se doc noi dung cua file duoi dang van ban.
	if(filePtr == NULL)
	{
		printf("LOI: Khong the mo tap tin!\n");
		exit(2);	// thoát ct voi ma~ 2;
	}	
	while(!feof(filePtr)) // lam lien tuc cho den khi het noi dung trong file
	{
		char dulieu[128];
		fgets(dulieu, 128, filePtr); // doc du lieu vao char dulieu[128]
		// ben trong gets chinh la fgets 
		char dulieuNguoc[128];
		int len = strlen(dulieu)-1;
		int i;
		for(i=0; i<=len; i++)
		{
			dulieuNguoc[i] = dulieu[len-i]; // dao nguoc du lieu
		}
		dulieuNguoc[len+1] = '\0'; // ngat chuoi du lieu nguoc, neu khong ngat se sinh loi~ bo nho.
		printf("%s", dulieuNguoc); // in ra du lieu
	}
	fclose(filePtr); // dong file
}
int main()
{
	nhapDLvaoTapTin();
	inChungNoRaNguocLai();
}
// entry point dich nom na la loi vao`
// moi chuong trinh trong moi he dieu hanh deu co duy nhat 1 entry point
// no la diem dau tien ma chuong trinh chay.
