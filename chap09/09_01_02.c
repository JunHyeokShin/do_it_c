#include <stdio.h>

void main()
{
	int sum = 0;
	int num = 1;	//���� ����
	for( ; ; ) {	//���� ������ ����� for �ݺ���
		//�ջ��ϱ� �� sum���� ����Ͽ� "num + sum ="�̶�� �����
		printf("num(%d) + sum(%d) = ", num, sum);
		//sum�� num�� �ջ���
		sum = sum + num;
		//�ջ� �� sum ���� ����ϰ� ���� �ٲ�
		printf("%d\n", sum);
		num++;		//���� ��ȭ ����
		if(num > 5) break;	//���� ���� num > 5�� ���̸� �ݺ��� ����
	}
	printf("\nResult : num = %d sum = %d\n", num, sum);
}