#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void buoi3_bai1()
{
	int n = 0;
	printf("vui long nhap gia tri n: ");
	scanf("%d", &n);
	if (n % 2 == 0)
	{
		printf("%d la so chan \n", n);
	}
	else
	{
		printf("%d la so le \n", n);
	}
}

void buoi3_bai2()
{
	int a = 0;
	int b = 0; 
	int c = 0;
	int max = 0;
	printf("nhap a: "); scanf("%d", &a);
	printf("nhap b: "); scanf("%d", &b);
	printf("nhap c: "); scanf("%d", &c);

	if (a > b)
		max = a;
	else
		max = b;
	if (max < c)
		max = c;
	printf("MAX: %d \n", max);
}

void buoi3_bai4()
{
	float diem = 0;
	printf("vui long nhap diem: ");
	scanf("%f", &diem);

	if (diem >= 8)
	{
		printf("hoc sinh loai GIOI \n");
	}
	else if (diem >= 6.5)
	{
		printf("hoc sinh loai KHA \n");
	}
	else if (diem >= 5.0)
	{
		printf("hoc sinh loai TRUNG BINH \n");
	}
	else
	{
		printf("hoc sinh loai YEU \n");
	}
}

/*
**Bài 7: Day of Week**

- Nhập số nguyên `1 → 7`.
- In tên thứ trong tuần (English): `1: Sunday`, `2: Monday`, ...
- Ngoài khoảng: in `Invalid Input`.
*/
void buoi3_bai5()
{
	switch (0)
	{
	case 0:
		// khối lệnh 0
		break;
	case 1:
		// khối lệnh 1
		break;
	case 2:
		// khối lệnh 2
		break;
	default:
		// khối lệnh 3
		break;

	}
}

/*
 sử dụng for lòng for để in ra bản cửu chương 2 -> 9
*/
void buoi3_bai6()
{
	for (int j = 2; j <= 9; j++)
	{
		if (j == 4)
			break;

		for (int i = 0; i <= 10; i++)
		{
			printf("%d x %d = %d \n",j,  i, j * i);
		}
		printf("---\n");
	}
}

/*
	user nhập điểm cho học sinh, nếu trong khoảng 0-10 OK, không bắt nhập lại
	nhập sai quá 3 lần thì thông báo "nhap sai diem" và thoát khỏi vòng lập
*/
void buoi3_bai7()
{
	float diem = 0;
	int so_lan_nhap = 0;
	do
	{
		printf("vui long nhap diem(%d): ", so_lan_nhap); scanf("%f", &diem);
		so_lan_nhap++;
		if (so_lan_nhap >= 3)
		{
			printf("ban da nhap sai 3 lan \n");
			break;
		}
	} while (diem < 0 || diem > 10);
	if (diem >= 0 && diem <= 10)
		printf("diem: %f \n", diem);
	else
		printf("diem sai format \n");
}

void buoi3_bai8()
{
	int buoc = 0;
	while (buoc != 5)
	{
		switch (buoc)
		{
		case 1:

			break;
		case 2:

			break;
		case 3:

			break;
		case 4: 

			break;
		case 6:

			break;
		}
	}
}