#include <stdio.h>

void main()
{
	int sum = 0;
	int num = 1;
	//1���� 5���� 1�� ������Ű�鼭 �ݺ���
	do {
		//�ջ��ϱ� �� sum���� ����Ͽ� "num + sum = "�̶�� �����
		printf("num(%d) + sum(%d) = ", num, sum);
		//sum�� num�� ����
		sum = sum + num;
		//���� �� sum���� ����ϰ� ���� �ٲ�
		printf("%d\n", sum);
		//���� ���ڸ� ���ϱ� ���ؼ� ���ڸ� ������Ŵ
		num++;
	} while(num <= 5);
	printf("\nResult : num = %d sum = %d\n", num, sum);
}