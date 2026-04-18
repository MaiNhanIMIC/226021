#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void giai_phuong_bac_2()
{
	// yêu cầu user nhập a, b, c
	int a = 0;
	int b = 0;
	int c = 0;

	printf("vui long nhap gia tri cho a: ");
	scanf("%d", &a);
	printf("vui long nhap gia tri cho b: ");
	scanf("%d", &b);
	printf("vui long nhap gia tri cho c: ");
	scanf("%d", &c);
	// tính delta = b^2 - 4ac
	int delta = b * b - 4 * a * c;

	if (delta > 0) //nếu delta > 0 thì pt có nghiệm
	{
		double x1 = (-b - sqrt(delta)) / (2 * a);
		double x2 = (-b + sqrt(delta)) / (2 * a);
		printf("x1 = %f, x2 = %f \n", x1, x2);
	}
	else if (delta == 0)		//nếu delta == 0 thì pt có 1 nghiệm 
	{
		float x = -b / (2.0f * a);
		printf("x = %f \n", x);
	}
	else  //nếu delta < 0 thì pt vô nghiệm
	{
		printf("phuong trinh vo nghiem \n");
	}
}

void buoi2_bai_4()
{
	long long x = 2000000000 * 2; 
}