#include <stdio.h>
void main()
{
	int num = 0, count = 0;
	char num_string[4] = "123";
	//���ڿ��� ���� ������ �ݺ���
	while(num_string[count] != 0) {
		num = num * 10 + (num_string[count] - '0');
		count++;	//���� ���ڷ� �̵���
	}
	printf("%s -> %d\n", num_string, num);
}