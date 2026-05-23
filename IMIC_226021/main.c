#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "lib.h"

int function(int x)
{
	return 100;
}


int sum(int* mang, int size)
{
	int sum = 0;
	for(int i = 0; i < size; i++)
	{
		sum += mang[i];
	}
	return sum;
}

#include <malloc.h>
void main()
{
// yeu cau: nhap gia tri cho mang
//		+ nhập số lượng phần tử trong mãng
//		+ nhập vào giá trị của từng phần tử
// in ra mãng theo format {1,2,3,4,5...}
// gọi hàm sum để tính tổng giá trị trong mãng

	// khai báo mãng lớn bao gồm 1000 phần tử
	int* mang;
	int so_luong = 0;
	printf("vui long nhap so luong phan tu: ");
	scanf("%d", &so_luong);

	mang = malloc(so_luong * 4);

	for (int i = 0; i < so_luong; i++)
	{
		printf("nhap mang[%d]:", i);
		scanf("%d", &mang[i]);
	}

	printf("{");
	for (int i = 0; i < so_luong; i++)
	{
		printf("%d", mang[i]);
		if (i < (so_luong - 1))
		{
			printf(",");
		}
	}
	printf("}\n");

	int x = sum(mang, so_luong);
	printf("sum: %d \n", x);

	free(mang);
}
