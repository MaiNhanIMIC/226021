# LẬP TRÌNH C

## Buổi 2: Biến, Kiểu Dữ Liệu và Nhập/Xuất Cơ Bản
### 2.1. Cách **thể hiện** số trong lập trình C

Để hiểu cách máy tính lưu trữ số, trước tiên hãy xem xét hệ La Mã:
```text
X   <-> 10
XV  <-> 15
XVI <-> 16
```
> **Nhận xét:** Giá trị thực chất là GIỐNG NHAU, chỉ khác nhau ở **cách ghi** (cách biểu diễn).

Trong lập trình C, có 4 cách để thể hiện một con số:

* **Hệ cơ số 2 (Binary - BIN):**
    * Sử dụng 2 chữ số: `0` và `1`.
    * Tiền tố trước con số: `0b` (VD: `0b1010`).
    * *Ý nghĩa:* Đây là hệ thống đếm gốc mà máy tính thực sự sử dụng và hiểu được.
* **Hệ cơ số 8 (Octal - OCT):**
    * Sử dụng 8 chữ số: `0, 1, 2, 3, 4, 5, 6, 7`.
    * Tiền tố trước con số: `0` (VD: `012` tương đương với 10 trong hệ thập phân).
* **Hệ cơ số 10 (Decimal - DEC):**
    * Sử dụng 10 chữ số: `0` đến `9`.
    * Không cần thêm tiền tố.
    * *Ý nghĩa:* Là hệ đếm tự nhiên mà con người chúng ta sử dụng hàng ngày.
* **Hệ cơ số 16 (Hexadecimal - HEX):**
    * Sử dụng 16 ký tự: `0-9` và `A, B, C, D, E, F`.
    * Tiền tố trước con số: `0x` (VD: `0x1A`).
    * *Ý nghĩa:* Là cách viết rút gọn rất hiệu quả của hệ 2 (cứ 4 bit hệ 2 gộp thành 1 ký tự hệ 16).

**Ví dụ minh họa:**
Để lưu con số `1234` (hệ 10) vào máy tính, máy tính sẽ lưu dưới dạng nhị phân:
```text
Hệ 2  (BIN): 0b010011010010
Hệ 16 (HEX): 0x4D2  (Cách viết rút gọn của hệ 2 ở trên)
Hệ 8  (OCT): 02322
```

---

### 2.2. Cách tổ chức của Bộ nhớ (Memory)

> **Quy tắc cốt lõi:** Cứ mỗi **1 byte** memory sẽ được hệ điều hành cấp cho **1 địa chỉ** (address) duy nhất để quản lý.

---

### 2.3. Biến (Variable)

Biến thực chất là **tên gọi của một vùng nhớ** dùng để lưu trữ dữ liệu trong quá trình chương trình chạy.

**Ví dụ thực tế:**
```c
int x;      // Khai báo một biến tên là x
// 'x' là tên của vùng nhớ được cấp phát.
// '&x' là địa chỉ cụ thể của vùng nhớ đó trong RAM.

x = 1;      // Ghi giá trị 1 vào vùng nhớ có tên là x.
int y = x;  // Đọc giá trị từ vùng nhớ x (là 1), sau đó ghi giá trị đó vào vùng nhớ y.
```

#### 2.3.1. Các kiểu dữ liệu cơ bản (Data Types)

**1. Kiểu số nguyên (Integer)**

| Tên kiểu dữ liệu | Kích thước | Phạm vi lưu trữ |
| :--- | :---: | :---: |
| `char` | 1 byte | -128 đến 127 |
| `unsigned char` | 1 byte | 0 đến 255 |
| `short` | 2 bytes | -32,768 đến 32,767 |
| `unsigned short` | 2 bytes | 0 đến 65,535 |
| `int` | 4 bytes | -2,147,483,648 đến 2,147,483,647 |
| `unsigned int` | 4 bytes | 0 đến 4,294,967,295 |
| `long long` | 8 bytes | -9,223,372,036,854,775,808 đến 9,223,372,036,854,775,807 |
| `unsigned long long`| 8 bytes | 0 đến 18,446,744,073,709,551,615 |

**2. Kiểu số thực (Floating-point)**

| Tên kiểu dữ liệu | Kích thước | Phạm vi lưu trữ |
| :--- | :---: | :---: |
| `float` | 4 bytes | ±1.18E-38 đến ±3.4E+38 *(Độ chính xác: 6-7 chữ số thập phân)* |
| `double` | 8 bytes | ±2.23E-308 đến ±1.7E+308 *(Độ chính xác: 15-16 chữ số thập phân)* |

#### 2.3.2. Khai báo biến

Khai báo biến là hành động bạn yêu cầu Hệ điều hành (OS) cấp phát một vùng nhớ với kích thước tương ứng.

**Cú pháp:**
```c
<KIỂU_DỮ_LIỆU> TÊN_BIẾN [= giá trị khởi tạo ban đầu];
```

**Ví dụ 1: Khai báo chuẩn**
```c
int x = 0;
// - int: Là KIỂU DỮ LIỆU.
// - x: Là TÊN BIẾN.
// - = 0: Là giá trị khởi tạo ban đầu.
// Ý nghĩa: OS cấp phát cho biến 'x' một vùng nhớ 4 bytes để chứa số nguyên và đặt giá trị ban đầu là 0.
```

**Ví dụ 2: Lỗi Tràn Dữ Liệu (Overflow)**
```c
unsigned char x = 1234;
printf("x: %d \n", x);
```
* Kết quả mong đợi: ~~`x: 1234`~~ (Sai ❌)
* Kết quả thực tế: `x: 210` (Đúng ✔️)

> **Giải thích:** Biến `x` kiểu `unsigned char` chỉ có **1 byte** (chứa được tối đa giá trị 255). Số `1234` cần tới **2 bytes** để lưu trữ. Khi gán `1234` vào `x`, dữ liệu bị tràn (chỉ lấy phần byte thấp), dẫn đến kết quả in ra bị sai lệch thành `210`.

---

### 2.4. Một số hàm In/Out tiêu chuẩn trong C

Để sử dụng các hàm Nhập/Xuất (Input/Output), ta cần khai báo thư viện tiêu chuẩn: `#include <stdio.h>`.

#### 2.4.1. Hàm `printf` (In dữ liệu)
Dùng để in thông báo hoặc giá trị của biến ra màn hình console.

| Ký tự định dạng | Ý nghĩa |
| :---: | :--- |
| `%d` | In ra số nguyên (int) theo hệ 10 |
| `%x` | In ra số nguyên theo hệ 16 |
| `%c` | In ra ký tự dựa theo [bảng mã ASCII](https://www.asciitable.com/) |
| `%f` | In ra số thực (float/double) |

**Ví dụ:**
```c
char x = 109;
printf("x: %d \n", x);  // --> x: 109
printf("x: %x \n", x);  // --> x: 6d
printf("x: %c \n", x);  // --> x: m

float pi = 3.14;
printf("pi: %f \n", pi); // --> pi: 3.140000
```

#### 2.4.2. Hàm `scanf` (Nhập dữ liệu)
Dùng để quét và nhận dữ liệu người dùng nhập vào từ bàn phím.

> **Lưu ý trong Visual Studio:** Hãy thêm `#define _CRT_SECURE_NO_WARNINGS` lên dòng đầu tiên của file (trước cả `#include <stdio.h>`) nếu bạn gặp lỗi: *"'scanf': This function or variable may be unsafe..."*

| Ký tự định dạng | Ý nghĩa |
| :---: | :--- |
| `%d` | Chờ user nhập số nguyên hệ 10, kết thúc bằng phím `Enter` |
| `%x` | Chờ user nhập số nguyên hệ 16, kết thúc bằng phím `Enter` |
| `%c` | Chờ user nhập 1 ký tự (theo ASCII), kết thúc bằng phím `Enter` |
| `%f` | Chờ user nhập số thực, kết thúc bằng phím `Enter` |

**Ví dụ:**
```c
int x;
printf("Moi nhap gia tri cho x: ");
scanf("%d", &x);  
// Chương trình tạm dừng, chờ user nhập số nguyên hệ 10. 
// Sau khi user nhấn Enter, giá trị sẽ được lưu vào địa chỉ vùng nhớ của biến x (&x).
```
