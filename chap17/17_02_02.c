#include <stdio.h>
#include <malloc.h>
void main()
{
	short **pp;
	pp = (short **)malloc(sizeof(short *));	//4����Ʈ�� �Ҵ���. �� ��° ���� ����
	*pp = (short *)malloc(sizeof(short));	//2����Ʈ�� �Ҵ���. �� ��° ���� ����

	**pp = 10;		//2���� �����͸� ����Ͽ� �� ��° ���ڿ� 10�� ������
	printf("**pp : %d\n", **pp);	//10�� �����
	free(*pp);		//�� ��° ���ڿ� �ش��ϴ� �޸� ������
	free(pp);		//�� ��° ���ڿ� �ش��ϴ� �޸� ������
}