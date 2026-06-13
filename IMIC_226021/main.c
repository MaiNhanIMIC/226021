#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <stdlib.h>
typedef struct
{
	char ten[32];
	int tuoi;
	float diem_toan;
	float diem_van;
}hoc_sinh_t;

int main()
{
	FILE* pf = fopen("C:\\Users\\Dell\\Downloads\\danh_sach_hoc_sinh.csv", "r");
	if (pf == NULL)
	{
		printf("Mo file that bai \n");
		return -1;
	}
	char file_data[2 * 1024] = { 0 };
	char c = 0;
	int index = 0;
	do
	{
		c = fgetc(pf);
		file_data[index] = c;
		index++;
	} while (c != -1);
	fclose(pf);

	printf("%s \n", file_data);

	int line_num = 0;
	for (int i = 0; i < index; i++)
	{
		if (file_data[i] == '\n')
			line_num++;
	}

	//hoc_sinh_t danh_sach[line_num];
	hoc_sinh_t* danh_sach = calloc(line_num - 1, sizeof(hoc_sinh_t));
	char* temp = file_data + 28;
	for (int i = 0; i < line_num - 1; i++)
	{
		char temp_buf[32] = { 0 };
		int cnt = 0;
		while (*temp != ',')
		{
			temp_buf[cnt] = *temp;
			cnt++; temp++;
		}
		cnt = 0;
		memcpy(danh_sach[i].ten, temp_buf, strlen(temp_buf));
		memset(temp_buf, 0, sizeof(temp_buf));
		temp++;

		while (*temp != ',')
		{
			temp_buf[cnt] = *temp;
			cnt++; temp++;
		}

		cnt = 0;
		danh_sach[i].tuoi = atoi(temp_buf);
		memset(temp_buf, 0, sizeof(temp_buf));
		temp++;


		while (*temp != ',')
		{
			temp_buf[cnt] = *temp;
			cnt++; temp++;
		}

		cnt = 0;
		danh_sach[i].diem_toan = atof(temp_buf);
		memset(temp_buf, 0, sizeof(temp_buf));
		temp++;

		while (*temp != '\n')
		{
			temp_buf[cnt] = *temp;
			cnt++; temp++;
		}

		cnt = 0;
		danh_sach[i].diem_van = atof(temp_buf);
		memset(temp_buf, 0, sizeof(temp_buf));
		temp++;
	}
	float diem_trung_binh_cao_nhat = 0;
	int vi_tri_cao_nhat = 0;
	for (int i = 0; i < line_num - 1; i++)
	{
		printf("ten: %s \n", danh_sach[i].ten);
		printf("\ttuoi: %d \n", danh_sach[i].tuoi);
		printf("\tdiem toan: %.1f \n", danh_sach[i].diem_toan);
		printf("\tdiem van: %.1f \n", danh_sach[i].diem_van);

		float diem_trung_binh = (danh_sach[i].diem_toan + danh_sach[i].diem_van) / 2;
		if (diem_trung_binh > diem_trung_binh_cao_nhat)
		{
			diem_trung_binh_cao_nhat = diem_trung_binh;
			vi_tri_cao_nhat = i;
		}
	}
	printf("hoc sinh gioi nhat la: %s \n", danh_sach[vi_tri_cao_nhat].ten);

}