#include <stdio.h>

void main()
{
	//���� ���� ������ sum�� �ջ꿡 ����� ���ڸ� ������ num�� ������
	int sum = 0, num;
	//1���� 5���� 1�� �����ϸ鼭 �ݺ���
	for(num = 1; num <= 5; num++) {
		//�ջ��ϱ� �� sum���� ����Ͽ� 'num + num ='�̶�� �����
		printf("num(%d) + sum(%d) = ", num, sum);
		//sum�� num�� ����
		sum = sum + num;
		//���� �� sum���� ����ϰ� ���� �ٲ�
		printf("%d\n", sum);
	}
	//�ݺ��� ������ ���� �ٲ� �� num���� ���� sum���� ���� �����
	printf("\nResult : num = %d sum = %d\n", num, sum);
}