#include <stdio.h>

void main()
{
	int data = 0x00000412;
	FILE *p_file = fopen("jin.dat", "wb");	//쓰기 모드로 바이너리 파일을 오픈함
	if(NULL != p_file) {	//파일 열기에 성공한 경우
		fwrite(&data, sizeof(int), 1, p_file);
		fclose(p_file);	//파일을 닫음
	}
}