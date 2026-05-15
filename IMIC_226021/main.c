#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "thuvien.h"


void main()
{
	char str[] = "hello World 123";
	// vòng lập chạy từ đầu chuỗi đến ký tự kết thúc chuỗi
	//	nếu ký tự đó nằm từ 'a' đến 'z' thì:
	//		in hoa ký tự đó bằng các trừ 32

	printf("[truoc]: %s \n", str);
	int index = 0;
	while (str[index] != 0)
	{

		index++;
	}
	printf("[sau]: %s \n", str);
}
