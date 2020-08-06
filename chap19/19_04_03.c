#include <stdio.h>

void main()
{
	int num;
	FILE *p_file = fopen("tipssoft.txt", "rt");	//읽기 모드로 텍스트 파일을 오픈함
	if(NULL != p_file) {	//파일 열기에 성공한 경우
		while(EOF != fscanf(p_file, "%d", &num)) {
			//파일에서 읽은 숫자 값을 화면에 출력함
			printf("%d\n", num);
		}
		fclose(p_file);	//파일을 닫음
	}
}