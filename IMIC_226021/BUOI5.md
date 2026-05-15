# STRING - chuỗi ký tự
## khái niệm: ký tự là gì?
- Ký tự được lưu trong bộ nhớ máy tính như thế nào?
    + được lưu theo bảng mã ASCII
        * VD: 'a' trong ASCII là 97, 'b' trong ASCII là 98
        * [ASCII Table - ASCII Character Codes, HTML, Octal, Hex, Decimal](https://www.asciitable.com/)
    + sử dụng 1 byte để lưu 1 ký tự
    + trong lập trình C, để thể hiện 1 ký tự ta chứa nó trong cập dấu nháy đơn `' '`
## khái niệm: chuỗi là gì?
- String là chuỗi ký - bao gồm nhiều ký tự, ==PHẢI KẾT THÚC BẰNG KÝ TỰ CÓ GIÁ TRỊ BẰNG 0== (ký tự kết thúc chuỗi)
- trong lập trình c, khai báo một string (chuỗi) như sao:
```c
// khai báo 1 array bao gồm 6 đối tượng là char,
// khởi tạo giá trị ban đầu cho chúng để chứa chữ hello
// chú ý: kết thúc string là 1 ký tự kết thúc chuỗi
char str[6] = {'h', 'e', 'l', 'l', 'o', 0};
char str[] = {'h', 'e', 'l', 'l', 'o', 0};
```
- **CÁCH KHAI BÁO 1**: ngôn ngữ C cho phép khai báo string một cách ngắn ngọn hơn
```c
char str_1[6] = "hello";
char str_1[] = "hello";     // khai báo array và khởi tạo giá trị ban đầu cho array
str_1 --> địa chỉ bất đầu của string
str_1[0] <--> *str_1 --> 'h'
str_1[1] <--> *(str_1 + 1) --> 'e'
str_1[0] = 'H';
```
> với các khai báo này chúng ta có thể truy cập vào để read/write dữ liệu trong string
- ngoài ra trong ngôn ngữ C, khi chứa string trong cập dấu nháy kép `" "` thì nó sẽ trả về địa chỉ của string đó
```c
printf("string: %s \n", "hello");
```
- CÁCH KHAI BÁO 2: sử dụng con trỏ để chứa địa chỉ bất đầu của string
```c
char* str_2 = "hello";     // khai báo con trỏ để chứa địa chỉ của string
str_2 --> địa chỉ của string
*str_2 <--> str_2[0] --> 'h'
*(str_2+1) <--> str_2[1] --> 'e'
str_2[0] = 'H';   :x: không thể ghi dữ liệu vào được
```
> với các khai báo này chúng ta chỉ có thể read dữ liệu trong string mà không thể write dữ liệu được

---
# FUNCTION - HÀM
- hàm sẽ miêu tả một công việc hay một hành động nào đó
    + VD:
        * `printf`: hàm này in ra màn hình console
        * `scanf`: scan dữ liệu từ bàn phím
- Khi mà xây dựng hàm (viết code cho hàm) cần xác định 3 yếu tố:
    + chức nâng của hàm: hàm này dùng để làm gì
    + intput của hàm: hàm này cần truyền cái gì vào để nó hoạt động
    + output của hàm: sau khi hàm hoạt động xong thì nó sẽ trả về (return) cái gì
    + VD 1: xây dựng hàm dùng để cộng hai số nguyên
        + chức nâng: cộng 2 số nguyên
        + input: 2 số nguyên
        + output: kết quả phép cộng - là số nguyên
    + VD 2: xây dựng hàm để kiểm tra chuỗi có bao nhiêu ký tự
        + chức nâng: điếm số ký tự trong chuỗi
        + input: địa chỉ bất đầu của chuỗi (char* )
        + output: số nguyên - số ký tự của chuỗi
    + VD 3: xây dựng hàm để tính tổng các giá trị trong mãng
        + chức nâng: tính tổng phần tử trong mãng
        + input:
            + param1: địa chỉ bất đầu của mãng
            + param2: số lượng phần tử của mãng (int)
        + output: kết quả - số nguyên (int)
- Cú pháp để khai báo một hàm
```c
<kiểu dữ liệu của OUTPUT> ten_ham(<các biến chứa INPUT>);
```

- Cú pháp để xây dựng hàm (viết code cho hàm):
```c
<kiểu dữ liệu của OUTPUT> ten_ham(<các biến chứa INPUT>)
{
    // code của hàm được viết ở đây
}
```