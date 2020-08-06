#include <stdio.h>

int GetMyString(char buffer[], int limit)
{
	int i;
	for(i = 0; i < limit; i++) {	//최대 개수만큼 반복함
		buffer[i] = getchar();
		if(buffer[i] == '\n') {
			buffer[i] = 0;	//[Enter] 키 위치에 0을 넣어서 문자열을 완성함
			return 1;	//정상적으로 입력이 완료됨
		}
	}
	buffer[i] = 0;
	rewind(stdin);	//표준 입력 버퍼에 남아 있는 문자들을 제거함
	return 0;	//입력 초과 현상이 발생했음을 알림
}

void main()
{
	char temp[10];
	int state;
	//사용자에게 최대 9(10-1)개까지만 입력 받겠다고 제한함
	state = GetMyString(temp, 10);

	if(state == 1) printf("input : %s\n", temp);	//정상 입력함
	else printf("input : %s -> out of range\n", temp);	//범위를 초과함
}