#include <stdio.h>
#include <string.h>

void main()
{
	char first_string[32], second_string[32];
	int length;

	printf("input first string : ");
	fgets(first_string, 32, stdin);
	printf("input second string : ");
	fgets(second_string, 32, stdin);

	//fgets 함수는 문자열 끝에 Enter를 의미하는 '\n'이 포함되어 있기 때문에 '\n'을 제거해야 함
	length = strlen(first_string);
	if(length > 0) first_string[length - 1] = 0;	//'\n' 제거
	strcat(first_string, second_string);
	printf("%s\n", first_string);
}