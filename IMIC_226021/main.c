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
#include <stdint.h>

int sum_arr(int* arr_addr, int arr_size)
{
	
}

// struct để miêu tả đối tượng là mang_co_dan
typedef struct
{
	int* vung_nho;// địa chỉ vùng nhớ của mãng
	int so_luong;// số lượng lượng phần tử trong mãng

} mang_co_dan;

// viết hàm để khởi tạo mạng
void array_init(mang_co_dan* addr_ptr, int so_luong)
{
	// cấp phát động cho vùng nhớ của mang_co_dan
	addr_ptr->vung_nho = malloc(so_luong * 4);
	// gán số lượng cho mang_co_dan
	addr_ptr->so_luong = so_luong;
}

void array_set_val(mang_co_dan* addr_ptr, int index, int val)
{
	// set giá trị của mang_co_dan
	addr_ptr->vung_nho[index] = val;
}

int array_get_val(mang_co_dan* addr_ptr, int index)
{
	// lấy giá trị của mang_co_dan ra
	return addr_ptr->vung_nho[index];
}

void array_resize(mang_co_dan* addr_ptr, int size)
{
	// cấp phát vùng nhớ mới với kích thước mới
	int* vung_nho_moi = malloc(size * 4);
	int* vung_nho_cu = addr_ptr->vung_nho;
	// copy dữ liệu từ vùng nhớ củ sang vùng nhớ mới
	for (int i = 0; i < addr_ptr->so_luong; i++)
	{
		vung_nho_moi[i] = vung_nho_cu[i];
		if (size <= i)break;
	}

	// gán lại số lượng phân tử với size mới
	addr_ptr->vung_nho = vung_nho_moi;
	addr_ptr->so_luong = size;

	// xóa vùng nhớ cũ
	free(vung_nho_cu);
}

void array_show(mang_co_dan* addr_ptr)
{
	printf("{");
	for (int i = 0; i < addr_ptr->so_luong; i++)
	{
		printf("%d ", addr_ptr->vung_nho[i]);
	}
	printf("}\n");
}

int array_sum(mang_co_dan* addr_prt)
{
	int sum = 0;
	for (int i = 0; i < addr_prt->so_luong; i++)
	{
		sum += addr_prt->vung_nho[i];
	}
	return sum;
}

// tạo struct để miêu tả đối tượng là node
typedef struct
{
	void* next_node;	// địa chỉ của node kế tiếp
	int value;			// giá trị của node
}node;
	
// tạo struct để miểu tả đối tượng là linked_list
typedef struct
{
	node* root_node; // địa chỉ của node đầu tiên.
	int size;		 // số lượng node
} linked_list;
	
// viết hàm: khởi tạo linked_list
void linked_list_init(linked_list* ll)
{
	ll->root_node = NULL;
	ll->size = 0;
}
// viết hàm: để thêm một node vào cuối linked_list
void linked_list_add_node(linked_list* ll, int val)
{
	node* n = malloc(sizeof(node));
	n->value = val;
	n->next_node = NULL;
	if (ll->root_node == NULL)
	{
		ll->root_node = n;
	}
	else
	{
		node* temp = ll->root_node;
		for (int i = 0; i < ll->size -1; i++)
		{
			temp = (node*)(temp->next_node);
		}
		temp->next_node = n;
	}
	ll->size++;
}
// viết hàm: để đọc giá trị của một node trong linked_list
int linked_list_get_val(linked_list* ll, int index)
{
	node* temp = ll->root_node;
	for (int i = 0; i < index; i++)
	{
		temp = (node*)(temp->next_node);
	}
	return temp->value;
}

void linked_list_show_all_node(linked_list* ll);
void linked_list_remove_node(linked_list* ll, int index);
void linked_list_insert_node(linked_list* ll, int index, int val);


void main()
{
	linked_list l;
	linked_list_init(&l);
	linked_list_add_node(&l, 10);
	linked_list_add_node(&l, 20);
	linked_list_add_node(&l, 30);
	linked_list_add_node(&l, 40);

	printf("node2: %d \n", linked_list_get_val(&l, 2));
}