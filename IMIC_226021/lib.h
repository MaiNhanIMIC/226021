#pragma once
/**
* @brief cộng 2 số nguyên
* @param int: số nguyên 1
* @param int: số nguyên 2
* @return int - kết quả của phép cộng
*/
int cong_so_nguyen(int so_nguyen_1, int so_nguyen_2);

/**
* @brief nhân 2 số nguyên
* @param int: số nguyên 1
* @param int: số nguyên 2
* @return int - kết quả của phép nhân
* @note không sử dụng toán tử *, sử dụng hàm cong_so_nguyen
*/
int nhan_so_nguyen(int so_nguyen_1, int so_nguyen_2);


/**
* @brief điểm số ký tự trong chuỗi
* @param char*: chứa địa chỉ bất đầu của chuỗi
* @return int: số lượng ký tự điếm được
*/
int str_len(char* str);

/**
* @brief tính tổng các phần tử trong mãng
* @param int*: địa chỉ bất đầu của mãng
* @param int: số lượng phần tử của mãng
* @return int: kết quả của tổng
*/
int arr_sum(int* arr, int size);