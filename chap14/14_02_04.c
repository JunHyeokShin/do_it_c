#include <stdio.h>
void main()
{
	//���ڿ��� �������� NULL ���� 0�� �����ؾ� �ϹǷ� �ִ� 9���� ���ڱ��� ���� ������
	char input_string[10];
	gets(input_string);	//���ڿ��� �Է� �޾� input_string�� ������
	printf("input : %s\n", input_string);	//�Է� ���� ���ڿ��� �����
}