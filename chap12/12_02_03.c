#include <stdio.h>
#include <string.h>	//���ڿ� ǥ�� �Լ��� ����ϱ� ���� �߰���

void main()
{
	int data_length;	//���ڿ� ���̸� ������ ����
	char data[10] = {'h', 'a', 'p', 'p', 'y', 0,};	//"happy" ���ڿ��� ������
	//data ������ ��� �ִ� ���ڿ��� ���̸� ����
	data_length = strlen(data);
	//���ڿ��� ����(���� ����)�� �����
	printf("data length = %d\n", data_length);
}