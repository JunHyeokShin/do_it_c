#include <stdio.h>
void ShowMultiplication(int step)
{
	int i;
	//i ������ 1~9���� 1�� �����ϸ鼭 �� 9�� �ݺ���
	for(i = 1; i <= 9; i++) {
		//step * i �������� �����
		printf("%d * %d = %d\n", step, i, step * i);
	}
}

void main()
{
	int m;
	//2�ܿ��� 9�ܱ��� ����ϵ��� �ݺ���
	for(m = 2; m <= 9; m++) {
		//�Ű������� 2~9���� �����Ͽ� �������� �����
		ShowMultiplication(m);
	}
}