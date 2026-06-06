#include <stdio.h>

typedef enum
{
	NAM,
	NU
} gt_t;

typedef enum
{
	GIOI, KHA, TRUNG_BINH, YEU
} loai_t;

typedef struct {
	char* ten;
	int tuoi;
	gt_t gioi_tinh;		
	float diem_toan;
	float diem_van;
	loai_t loai;		
} hoc_sinh_t;


hoc_sinh_t tim_hoc_gioi_nhat(hoc_sinh_t* mang, int kich_thuoc)
{
	hoc_sinh_t hoc_sinh_gioi_nhat = { 0 };
	float diem_tb_hs_gioi_nhat = 0;

	for (int i = 0; i < kich_thuoc; i++)
	{
		float diem_tb = (mang[i].diem_toan + mang[i].diem_van) / 2;
		if (diem_tb_hs_gioi_nhat < diem_tb)
		{
			hoc_sinh_gioi_nhat = mang[i];
			diem_tb_hs_gioi_nhat = diem_tb;
		}
	}

	return hoc_sinh_gioi_nhat;
}

// khai báo mảng chứa 2 đối tượng là chuổi "NAM" và "NU"
char* chuyen_tu_gioi_tinh_sang_chuoi[] = { "NAM", "NU" };
// khai báo mảng chứ 4 đối tượng là chuổi "GIOI", "KHA", "TRUNG BINH" và "YEU"
char* chuyen_tu_loai_sang_chuoi[] = { "GIOI", "KHA", "TRUNG BINH", "YEU" };


void main()
{
	// khởi tạo mãng chứa 3 học sinh (khởi tạo giá trị ban đầu)
	hoc_sinh_t danh_sach_lop[3] = {
		{"Nguyen Van A", 18, NAM, 8.5, 8, GIOI},
		{"Nguyen Van B", 18, NAM, 7.5, 8, KHA},
		{"Nguyen Thi C", 18, NU, 9.0, 8, GIOI},
	};

	// in tên - tuổi - giới tính - điểm toán - điểm văn - loại của học sinh có điểm trung bình cao nhất
	hoc_sinh_t hoc_gioi_nhat = tim_hoc_gioi_nhat(danh_sach_lop, 3);

	printf("ten: %s \n", hoc_gioi_nhat.ten);
	printf("tuoi: %d \n", hoc_gioi_nhat.tuoi);
	printf("gioi tinh: %s \n", chuyen_tu_gioi_tinh_sang_chuoi[hoc_gioi_nhat.gioi_tinh]);
	printf("diem toan: %.2f \n", hoc_gioi_nhat.diem_toan);
	printf("diem van: %.2f \n", hoc_gioi_nhat.diem_toan);
	printf("xep loai: %s \n", chuyen_tu_loai_sang_chuoi[hoc_gioi_nhat.loai]);
}