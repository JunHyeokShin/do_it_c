#include <stdio.h>

//unsigned short int���� US��� ���ο� �̸����� ������
typedef unsigned short int US;

void main()
{
	unsigned short int data =5;
	US temp;	//unsigned short int temp;�� ����

	temp = data;
	printf("temp = %d\n", temp);
}