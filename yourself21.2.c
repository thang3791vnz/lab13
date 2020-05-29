#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAP_TIN_NAY "tap_tin_nay.txt"
#define TAP_TIN_KHAC "tap_tin_khac.txt"


void loaiBoAEIOU(char dulieu[], char ketqua[])
{
	int soLuongKyTu = strlen(dulieu); // xem dulieu co bao nhieu chu cai
	int i;
	int k = 0;
	for(i=0; i < soLuongKyTu; i++)	// xu ly tung chu cai mot
	{
		switch(dulieu[i])
		{
			case 'A':
			case 'a':
			case 'E':
			case 'e':
			case 'I':
			case 'i':
			case 'O':
			case 'o':
			case 'U':
			case 'u':
				break; // truong hop an phai aeiou: khong lam gi ca,
			default:
				ketqua[k++] = dulieu[i]; // truong hop con lai: them ky tu i vao ket qua.
		}
	}
	
	ketqua[k] = '\0'; // ngat char de tranh loi~.
}


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	const char* str = "Yeu Em Gai Ban Ben Canh!"; 
	char ketqua[128];
	loaiBoAEIOU(str, ketqua);
	printf("%s", ketqua);
	return 0;
}
	// neu thong thuoc thao tac voi file roi
	// thi co the doc noi dung TAP_TIN_NAY vao dulieu
	// sau do ghi dulieu vao TAP_TIN_KHAC
