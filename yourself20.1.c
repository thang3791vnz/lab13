#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct Dodai // struc ?
{
	int yards;
	int feet;
	int inches;
	int cm;
	int dm;
}Dodai;

void xuat (Dodai dd) // Dodai vs. DoDai? #
{
	printf("\n%d yards =  ", dd.yards);
	printf("%d feet =  ", dd.feet);
	printf("%d inches = ", dd.inches);
	printf("%d dm = ", dd.cm);
	printf("%d cm  ", dd.dm);
}
Dodai len[5];
int main()
{
	printf("Nhap vao 5 do dai (yards)\n");
	int i;
	for(i = 0; i <=5; i++)
	{
		printf("year :", i+1); //nhap vao danh sach
		// nhap gia tri
		scanf("%d", &len[i].yards); // nhap vao danh sach
		// tinh toan
		len[i].feet = len[i].yards * 3; // > gia tri quy doi
		len[i].inches = len[i].yards * 36; // > gia tri quy doi
		len[i].dm = len[i].yards *9.1;
		len[i].cm = len[i].yards *91;
	}
	for(i = 0; i < 5; i++)
	{
		xuat(len[i]);
	}
	getch();
}
