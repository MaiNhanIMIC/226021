#include <stdio.h>


void main()
{
	// open file
	FILE* pf = fopen("D:\\Temp_Dir\\hello.txt", "w");
	if (pf == NULL)
	{
		printf("mo file that bai \n");
		return;
	}
	else
	{
		printf("mo file thanh cong \n");
	}
	// read / write
	fputc('x', pf);
	fputc('i', pf);
	fputc('n', pf);
	fputc(' ', pf);
	fputc(' ', pf);

	// close file
	fclose(pf);
}