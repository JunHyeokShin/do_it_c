#include <stdio.h>
void main()
{
	int data = 0x12345678, i;
	char *p = (char *)&data;
	//4바이트 데이터를 바이트 단위로 값을 출력하기 위해 4번 반복함
	for(i = 0; i < 4; i++) {
		//첫 바이트는 *(p + 0), 두 번째는 *(p + 1), 세 번째는 *(p + 2), ...
		printf("%X, ", *(p + i));
	}
}