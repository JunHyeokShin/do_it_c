#include <stdio.h>
#include <malloc.h>

void main()
{
	char *p_name;
	p_name = (char *)malloc(32);
	if(p_name != NULL) {
		//메모리 할당에 성공한 경우
		printf("Your name : ");
		gets(p_name);	//이름을 입력 받음

		printf("Hi~ %s\n", p_name);		//입력 받은 이름을 출력함
		free(p_name);
	} else {
		//메모리 할당에 실패한 경우
		printf("Memory allocation error!!");
	}
}