#include "lib.h"

int nhan_so_nguyen(int so_nguyen_1, int so_nguyen_2)
{
	int ketqua = 0;
	for (int i = 0; i < so_nguyen_2; i++)
	{
		//ketqua = ketqua + so_nguyen_1;
		ketqua = cong_so_nguyen(ketqua, so_nguyen_1);
	}

	return ketqua;
}

int cong_so_nguyen(int so_nguyen_1, int so_nguyen_2)
{
	int ketqua = 0;

	ketqua = so_nguyen_1 + so_nguyen_2;

	return ketqua;
}


int str_len(char* str)
{
	int so_luong_ky_tu = 0;

	while (str[so_luong_ky_tu] != 0)
	{
		so_luong_ky_tu++;
	}

	return so_luong_ky_tu;
}

int arr_sum(int* arr, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}

	return sum;
}