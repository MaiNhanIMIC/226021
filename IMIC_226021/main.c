typedef struct
{
	int tu;
	int mau;
} phan_so_t;
/**
* @brief tìm phân số lớn nhất trong mảng
* @param (phan_so_t*) địa chỉ bất đầu của mảng phân số
* @param (int) số lượng phần tử của mảng
* @return (phan_so_t) phân số lớn nhất
*/
phan_so_t tim_phan_so_lon_nhat(phan_so_t* arr2, int kich_thuoc)
{
	phan_so_t kq;

	float gia_tri_max = 0;
	int vi_tri_max = 0;

	for (int i = 0; i < kich_thuoc; i++)
	{
		float gia_tri = (float)arr2[i].tu / arr2[0].mau;
		if (gia_tri_max < gia_tri)
		{
			gia_tri_max = gia_tri;
			vi_tri_max = i;
		}
	}

	kq = arr2[vi_tri_max];

	return kq;
}

#include <stdio.h>

typedef struct {
	char* ten;
	float diem_toan;
	float diem_van;
} hoc_sinh_t;

/**
* @brief tim học sinh có điểm trung bình cao nhất
* @param (hoc_sinh_t*) địa chỉ bất đầu của mảng học sinh
* @param (int) số lượng phần tử trong mảng
* @return (hoc_sinh_t) học sinh có điểm trung bình cao nhất
*/
hoc_sinh_t tim_hoc_sinh_cao_nhat(hoc_sinh_t* danh_sach, int so_luong)
{
	hoc_sinh_t kq;
	float diem_trung_binh_cao_nhat = 0;
	hoc_sinh_t hs_cao_nhat = { 0 };

	for (int i = 0; i < so_luong; i++)
	{
		float diem_trung_binh = (danh_sach[i].diem_toan + danh_sach[i].diem_van) / 2;
		if (diem_trung_binh_cao_nhat < diem_trung_binh)
		{
			hs_cao_nhat = danh_sach[i];
			diem_trung_binh_cao_nhat = diem_trung_binh;
		}
	}
	kq = hs_cao_nhat;
	return kq;
}

void main()
{
	
	// xây dựng kiểu dữ liệu để miêu tả đối tượng hoc_sinh
	//		+ tên
	//		+ điểm toán
	//		+ điểm văn
	// khai báo mảng bao gồm 5 phần tử hoc_sinh, khởi tạo giá trị ban đầu cho nó
	// viết HÀM để tìm học sinh có điểm trung bình (điểm toán + điểm văn)/2 cao nhất
	// sử dụng hàm, và in tên, điểm của học sinh này ra
	hoc_sinh_t arr[5] = {
		{.ten = "Nguyen Van A", .diem_toan = 8.0, .diem_van = 8.0},
		{.ten = "Nguyen Van B", .diem_toan = 8.0, .diem_van = 8.0},
		{.ten = "Nguyen Van C", .diem_toan = 9.0, .diem_van = 9.0},
		{.ten = "Nguyen Van D", .diem_toan = 8.0, .diem_van = 8.0},
		{.ten = "Nguyen Van E", .diem_toan = 10.0, .diem_van = 9.0},
	};

	hoc_sinh_t hs =  tim_hoc_sinh_cao_nhat(arr, 5);
	printf("ten: %s, diem toan: %.1f, diem van: %.1f \n", hs.ten, hs.diem_toan, hs.diem_van);
}