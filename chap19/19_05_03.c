#include <stdio.h>

void main()
{
	int data;
	FILE *p_file = fopen("jin.dat", "rb");	//읽기 모드로 바이너리 파일을 오픈함
	if(NULL != p_file) {	//파일 열기에 성공한 경우
		fread(&data, sizeof(int), 1, p_file);
		fclose(p_file);	//파일을 닫음
		printf("file data : %d(0x%04x)\n", data, data);	//파일에서 읽은 값을 출력함
	}
}