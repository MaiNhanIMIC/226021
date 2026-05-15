# ARRAY - mảng
## KHAI BÁO
- cho phép khai báo nhiều biến cùng một lúc
- cú pháp
```
<kieu du lieu> ten_mang[<so luong phan tu>] = [{<gia tri khoi tao ban dau>}]
```
- CHÚ Ý: số phần tử trong mãng PHẢI LÀ MỘT CON SỐ không được là một biến
- VD: Khai báo mãng chứa 10 biến `int`
```c
int arr[10] = {1,2,3,4,5,6,7,8,9,10};
int arr_2[10] = {0,0,0,0,0,0,0,0,0,0};
int arr_3[10] = {0};
```
- TRƯỜNG HỢP SAI
```c
int x = 10;
int arr[x] = {0};
```
## SỬ DỤNG
```c
int arr[3] = {1,2,3};
```
- lúc này chúng ta cho những BIẾN `arr[0]` `arr[1]` và `arr[2]`
- TÊN ARRAY đai diện cho địa chỉ bất đầu của ARRAY
---
# POINTER - Con trỏ
## Khái niệm:
- Con trỏ là một ==biến== dùng để ==lưu địa chỉ==
- Kích thước con trỏ phụ thuộc vào nền tản đang hoạt động:
    - x86 (32bit) kích thước con trỏ là 4 byte
    - x64 (64bit) kích thước con trỏ là 8 byte
## Khai báo:
cú pháp
```
<kieu du lieu>* ten_con_tro [= giá trị khởi tạo ban đầu];
```
## Cách sử dụng con trỏ
### Công dụng 1: dùng để lưu địa chỉ của đối tượng
```c
int x = 10;
// khai báo con trỏ để chứa địa chỉ của biến x
int* px;
px = &x;
printf("dia chi cua x: %x \n", &x);
printf("gia tri cua px: %x \n", px);
```
### Công dụng 2: truy cập (read/write) tới vùng nhớ có địa chỉ được lưu trong con trỏ
```c
int x = 10;     // ví dụ x được hệ điều hành cấp pháp ở vùng nhớ 0x1000
int* px = &x;   // lưu địa chỉ của x (0x1000) vào px
printf("gia tri cua px: %x \n", px);
printf("gia tri cua vung nho duoc luu trong px: %d \n", *px);
*px = 20;
printf("gia tri cua x: %x \n", x);
```
- Kiểu dữ liệu của con trỏ quyết định khả nâng truy cấp của con trỏ
```c
int x = 0x12345678;     // ví dụ x được hệ điều hành cấp pháp ở vùng nhớ 0x1000
char* px = &x;   // lưu địa chỉ của x (0x1000) vào px
printf("gia tri cua px: %x \n", px);
printf("gia tri cua vung nho duoc luu trong px: %d \n", *px);
*px = 20;
printf("gia tri cua x: %x \n", x);
```
