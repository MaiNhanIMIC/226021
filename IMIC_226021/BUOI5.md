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