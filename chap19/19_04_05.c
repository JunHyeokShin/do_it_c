#include <stdio.h>

void main()
{
	char temp[64];	//파일에서 문자열을 입력 받을 배열 변수
	FILE *p_file = fopen("tips.txt", "rt");	//읽기 모드로 텍스트 파일을 오픈함
	if(NULL != p_file) {	//파일 열기에 성공한 경우
		while(NULL != fgets(temp, sizeof(temp), p_file)) {
			printf("%s", temp);
		}
		fclose(p_file);	//파일을 닫음
	}
}