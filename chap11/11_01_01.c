#include <stdio.h>
int Sum(int data1, int data2)	//�Ű����� data1, data2�� Sum�Լ��� ���� ����
{
	//Sum�Լ��� ���� ���� result�� ������ �� data1 + data2 ������ �ʱ�ȭ��
	int result = data1 + data2;
	return result;
}

void main()
{
	int result;	//main�Լ��� ���� ���� result. �ʱ�ȭ���� �ʾ� � ���� ��� �ִ��� ��
	result = Sum(5, 3);
	printf("5 + 3 = %d\n", result);
}