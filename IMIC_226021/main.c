#include <stdio.h>
#include <Windows.h>
int global_val;
HANDLE pipe_write;
HANDLE pipe_read;
DWORD WINAPI function(_In_ LPVOID lpParameter)
{
	while (1)
	{
		int ss_val_to_send;
		ReadFile(pipe_read, &ss_val_to_send, sizeof(ss_val_to_send), NULL, NULL);
		printf("function is running: %d...\n", ss_val_to_send);
		Sleep(2000);
	}
	return 0;
}

int main()
{
	// tạo một thread để thực thi hàm function
	HANDLE thread_1 = CreateThread(NULL, 0, function, NULL, 0, NULL);
	CreatePipe(&pipe_read, &pipe_write, NULL, 1024);

	int ss_val = 0;
	while (1)
	{
		printf("main dang chay...\n");
		ss_val++;
		//global_val = ss_val; write ss_val vào biến global_val;
		WriteFile(pipe_write, &ss_val, sizeof(ss_val), NULL, NULL);
		Sleep(1000);
	}
	return 0;
}