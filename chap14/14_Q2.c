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

	//fgets �Լ��� ���ڿ� ���� Enter�� �ǹ��ϴ� '\n'�� ���ԵǾ� �ֱ� ������ '\n'�� �����ؾ� ��
	length = strlen(first_string);
	if(length > 0) first_string[length - 1] = 0;	//'\n' ����
	strcat(first_string, second_string);
	printf("%s\n", first_string);
}