#include <stdio.h>

void main()
{
	int sum = 0;
	int num = 1;
	//1���� 5���� 1�� ������Ű�鼭 �ݺ���
	while(num <= 5) {
		//�ջ��ϱ� �� sum���� ����Ͽ� "num + sum = "�̶�� �����
		printf("num(%d) + sum(%d) = ", num, sum);
		//sum�� num�� �ջ���
		sum = sum + num;
		//�ջ� �� sum���� ����ϰ� �� �ٲ��� ��
		printf("%d\n", sum);
		//���� ���ڸ� ���ϱ� ���ؼ� ���ڸ� ������Ŵ
		num++;
	}
	printf("\nResult : num = %d sum = %d\n", num, sum);
}