#include <stdio.h>
int GetStringLength(char data[])
{
	int count = 0;
	//0�� ���� ������ ������ ������ ����
	while(data[count]) count++;	//while(data[count] != 0) count++;�� ���� ����
	//���ڿ��� ���̸� ��ȯ��
	return count;
}

void main()
{
	int data_length;	//���ڿ� ���̸� ������ ����
	char data[10] = {'h', 'a', 'p', 'p', 'y', 0,};	//"happy" ���ڿ��� ������
	//data ������ ��� �ִ� ���ڿ��� ���̸� ����
	data_length = GetStringLength(data);
	//���ڿ��� ����(���� ����)�� �����
	printf("data length = %d\n", data_length);
}