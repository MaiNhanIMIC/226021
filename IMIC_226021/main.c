#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "lib.h"


void main()
{
	int mang[] = { 1,2,3,4,5 };

	int x = arr_sum(mang, 5);

	printf("x: %d \n", x);
}
