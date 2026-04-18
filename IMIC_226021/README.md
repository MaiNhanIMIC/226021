# LẬP TRÌNH C
## Buổi 2
### 2.1. Cách **thể hiện** số trong lập trình c
```
hệ la mã: 
X <-> 10
XV <-> 15
XVI <-> 16
```
- Giá trị GIỐNG NHAU chỉ khác ở cách ghi
- Trong lập trình C có 4 cách để thể hiện 1 con số
    - thể hiện theo hệ 2  (BIN):
        - sử dụng 2 chữ số: `0, 1`. để thể hiện một con số
        - ở trước có thêm tiền tố `0b`
        - Ý nghĩa: hệ này là hệ mà máy tính sử dụng
    - thể hiện theo hệ 8  (OCT):
        - sử dụng 8 chữ số (0,1,2,3,4,5,6,7)
        - ở trước có thêm tiền tố `0`
    - thể hiện theo hệ 10 (DEC):
        - sử dụng 10 chữ số (0,1,2,3,4,5,6,7,8,9) để thể hiện con số
        - không thêm tiền tố ở trước
        - Ý nghĩa: là hệ mà con người sử dụng
    - thể hiện theo hệ 16 (HEX):
        - sử dụng 16 chữ và số (0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F) để thể hiện con số
        - thêm tiền tố `0x`
        - Ý nghĩa: là cách viết rút gọn của hệ 2
    VD:
    ```
    để lưu con số 1234 vào máy tính
    thì máy tính sẽ lưu: 0b0100`1101`0010
    cách viết rút gọn 0x4D2
    02322
    ```
### 2.2. Cách tổ chức của memory
> Cứ mỗi 1 byte memory sẽ được cấp 1 địa chỉ
### 2.3. Biến (Variable)
- biến là tên của một vùng nhớ, để lưu dữ liệu  
VD:
    ```
    ta có biến x;
    x là tên của một vùng nhớ
    &x là địa chỉ của vùng nhớ đó
    x = 1; // ghi giá trị 1 vào vùng nhớ biến x
    y = x; // đọc giá trị của vùng nhớ x, ghi giá trị đó vào biến y
    ```
#### 2.3.1. Kiểu dữ liệu
- Số nguyên
| tên kiểu dữ liệu | kích thức | phạm vi lưu trữ |
|:---|:---:|:---:|
|char| 1 byte | -128 to 127 |
|unsigned char| 1 byte | 0 to 255 |
| short | 2 bytes | -32768 to 32767 |
| unsigned short | 2 bytes | 0 to 65535|
| int | 4 bytes | -2,147,483,648 to 2,147,483,647 |
| unsigned int | 4 bytes | 0 to 4294967295 |
| long long | 8 bytes | |
| unsigned long long | 8 bytes | |

- - Số thực
| tên kiểu dữ liệu | kích thức |
|:---|:---:|
| float | 4 bytes |
| double | 8 bytes |

#### 2.3.2. Khai báo biến
- Hành động yêu cầu hệ điều hành (OS) cấp phát một biến (một vùng nhớ)
```
<KIỂU DỮ LIỆU> TÊN_BIẾN [= giá trị khởi tạo ban đầu]
```
VD:
```c
int x = 0;
// int: là KIỂU DỮ LIỆU
// x: tên biến
// = 0: giá trị khởi tạo ban đầu
// ý nghĩa: yêu cầu hệ điều hành cấp phát cho biến x 1 vùng nhớ 4 byte để lưu số nguyên
```
VD2:
```c
unsigned char x = 1234;
printf("x: %d \n", x);
```
- :x:  ~~x: 1234~~
- :heavy_check_mark: x: 210
> x chỉ có 1 byte để chứa dữ liệu, x = 1234 đang lấy 2 byte lưu vào biến 1 byte nên bị tràn
### 2.4. Một số hàm in/out trong C
- sử dụng thư viện `stdio.h`
#### 2.4.1. `printf`
- để in ra màng hình console message
| ký tự miêu tả | ý nghĩa |
|:---:| :---|
| `%d` | in ra số nguyên (int) hệ 10 |
| `%x` | in ra số nguyên hệ 16 |
| `%c` | in ra ký tự theo bản mã [ASCII](https://www.asciitable.com/) |
| `%f` | in ra số thực |

VD: 
```c
char x = 109;
printf("x: %d \n", x);
// --> x: 109
printf("x: %x \n", x);
// --> x: 6d
printf("x: %c \n", x);
// --> x: m
pi = 3.14
printf("pi: %f \n", pi);
// --> pi: 3.140000
```
#### 2.4.2. `scanf`
- để scan từ bàn phím 
- chú ý: sử dụng `#define _CRT_SECURE_NO_WARNINGS` trước `#include <stdio.h>` khi bị báo lỗi:  
    > 'scanf': This function or variable may be unsafe. Consider using scanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.	

| ký tự miêu tả | ý nghĩa |
|:---:| :---|
| `%d` | chờ user nhập số nguyên (int) hệ 10 kết thúc là `enter`|
| `%x` | chờ user nhập số nguyên hệ 16 kết thúc là `enter`|
| `%c` | chờ user nhập ký tự theo bản mã [ASCII](https://www.asciitable.com/)  kết thúc là `enter`|
| `%f` |  chờ user nhập số thực kết thúc là `enter`|

VD: 
```c
// chờ user nhập giá trị cho biến x
int x;
scanf("%d", &x);    // chờ user nhập số nguyên hệ 10 sao đó khi user nhấn enter thì lưu vào địa chỉ biến x
````